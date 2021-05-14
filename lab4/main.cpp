#include <iostream>
#include "Stack.cpp"
#include <string>
#include <cmath>
using namespace std;

bool IsOperation(char s) {
    if(s == '^' || s == '*' || s == '/' || s == '-' || s == '+' || s == '(' || s == ')') {
        return true;
    }
    else {
        return false;
    }
}

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

string Convert(string input) {
    string number, output;
    Stack<char> stack(128);
    for(int i = 0; i < input.length(); i++) {
        char s = input[i];

        if((s >= '0' && s <= '9') || s == '.') {
            number += s;
        }

        else if(IsOperation(s)) {
            if(number.length()) {
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

    if(number.length()) {
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

float Calculate(string input) {
    float a, b;
    string number;
    Stack<float> stack(128);

    for(int i = 0; i < input.length(); i++) {
        char s = input[i];

        if((s >= '0' && s <= '9') || s == '.') {
            number +=s;
        }

        else if(IsOperation(s)) {
            if(number.length()) {
                stack.push(stof(number));
                number = "";
            }

            a = stack.peek();
            stack.pop();
            b = stack.peek();
            stack.pop();

            stack.push(DoOperation(a, b, s));
        }

        else {
            if(number.length()) {
                stack.push(stof(number));
                number = "";
            }
        }
    }

    return stack.peek();
}

int main() {
    string input = "(0.3-6.7)/(8.4+9.5)*1.2";
    cout << input << endl;
    cout << "should : 22*22*+" << endl;
    cout << Convert(input) << endl;
    cout << Calculate(Convert(input));
    return 0;
}
