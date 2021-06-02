//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "MinMax.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
MinMax<int> *list = new MinMax<int>;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	for (int i = 0; i < 5; i++) {
		list -> insert(i);;
	}

	list -> insert(11);

    for (int i = 5; i < 10; i++) {
		list -> insert(i);;
	}

	list -> print(ListBox1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	list -> insert(StrToInt(Edit1 -> Text));
	ListBox1 -> Clear();
	list -> print(ListBox1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	list -> remove(ListBox1 -> ItemIndex);
	ListBox1 -> Clear();
	list -> print(ListBox1);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
    list -> swap();
    ListBox1 -> Clear();
	list -> print(ListBox1);
}
//---------------------------------------------------------------------------

