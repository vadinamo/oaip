//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Stack.h"
#include <string.h>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


int Priority(char s) {
	switch (s) {
		case '^' : return 4;
		case '*' : case '/' : return 3;
        case '+' : case '-' : return 2;
		default : return 0;
	}
}

bool CompareOperators(char s1, char s2) {
	if(Priority(s1) <= Priority(s2)) return true;

    else return false;
}

String Convert(String input) {
	String number, output;
    Stack<char> stack(128);
	for(int i = 1; i <= input.Length(); i++) {
        char s = input[i];

		if((s >= '0' && s <= '9') || (s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z') || s == ',') {
            number += s;
		}

		else if(s == '^' || s == '*' || s == '/' || s == '-' || s == '+' || s == '(' || s == ')') {
			if(number.Length()) {
                output = output + number + " ";
                number = "";
            }

			if(s == '(') {
                stack.push(s);
            }

            else if (s == ')') {
                for(;;) {
                    char op = stack.peek();
                    output = output + op + " ";
                    stack.pop();
                    if(stack.peek() == '(') {
                        stack.pop();
                        break;
                    }
                }
            }

			else {
				while(!stack.isEmpty() && CompareOperators(s, stack.peek())) {
                    char op = stack.peek();
                    stack.pop();
                    output = output + op + " ";
                }

                stack.push(s);
            }
        }
    }

	if(number.Length()) {
        output = output + number + " ";
    }

    while(!stack.isEmpty()) {
        char op = stack.peek();
        stack.pop();
        output = output + op + " ";
	}

	return output;
}

float DoOperation(float number1, float number2, char operation) {
    switch(operation) {
        case '+':
            return number1 + number2;
        case '-':
            return number2 - number1;
        case '*':
            return number2 * number1;
        case '/':
            return number2 / number1;
        case '^':
            return pow(number2, number1);
        default:
            return 0;
	}
}

float Calculate(String input) {
    float a, b;
	String number;
    Stack<float> stack(128);

	for(int i = 1; i <= input.Length(); i++) {
        char s = input[i];

		if((s >= '0' && s <= '9') || s == ',') {
            number +=s;
        }

		else if(s == '^' || s == '*' || s == '/' || s == '-' || s == '+' || s == '(' || s == ')') {
			if(number.Length()) {
				stack.push(StrToFloat(number));
                number = "";
            }

            a = stack.peek();
            stack.pop();
            b = stack.peek();
			stack.pop();

            stack.push(DoOperation(a, b, s));
		}

		else {
			if(number.Length()) {
				stack.push(StrToFloat(number));
                number = "";
            }
        }
    }

    return stack.peek();
}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Edit4 -> Text = Convert(Edit1 -> Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Edit1 -> Text = "(0,3 - 6,7) / (8,4 + 9,5) * 1,2";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	String result = (0.3 - 6.7) / (8.4 + 9.5) *  1.2;
	Edit2 -> Text = result;
	Edit3 -> Text = FloatToStr(Calculate(Convert(Edit1 -> Text)));
}
//---------------------------------------------------------------------------

