//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "tree.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
tree *tr = new tree;
int x;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	tr -> add("D", 4 , NULL);
	tr -> add("E", 5 , tr -> getroot());
	tr -> add("B", 2 , tr -> getroot());
	tr -> add("C", 3 , tr -> getroot());
	tr -> add("A", 1 , tr -> getroot());

	x = 0;
	StringGrid1 -> Cells[0][0] = "Ф.И.О.";
	StringGrid1 -> Cells[0][1] = "Номер паспорта";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::show() {
    Memo1 -> Clear();
	TreeView1 -> Items -> Clear();
	tr -> ViewTree(tr -> getroot(), -1, TreeView1);
	tr -> preOrder(tr -> getroot(), Memo1);

	int j = 1;

	StringGrid1 -> ColCount = j;

	for(int i = 0; i < Memo1 -> Lines -> Count; i++) {
		StringGrid1 -> Cells[j][1] = Memo1 -> Lines -> Strings[i];
		i++;
		StringGrid1 -> Cells[j][0] = Memo1 -> Lines -> Strings[i];
		j++;

		StringGrid1 -> ColCount = j;
	}

	Memo1 -> Clear();
}

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	tr -> balance(tr, Memo1);
	Memo1 -> Clear();
    show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	tr -> add(Edit1 -> Text, StrToInt(Edit2-> Text), tr -> getroot());
    show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Memo1 -> Clear();
	if(tr -> find(tr -> getroot(), StrToInt(Edit3 -> Text)) == NULL) {
		Memo1 -> Lines -> Add("Выбранный элемент не найден!");
		return;
	}
	Memo1 -> Lines -> Add("Ф.И.О. " + (tr -> find(tr -> getroot(), StrToInt(Edit3 -> Text))) -> fio);
	Memo1 -> Lines -> Add("Номер паспорта " + IntToStr((tr -> find(tr -> getroot(), StrToInt(Edit3 -> Text))) -> num));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Memo1 -> Clear();
	/*Node *res = tr -> task(tr -> getroot(), tr -> getroot());
	Memo1 -> Lines -> Add("Ф.И.О. " + res -> fio);
	Memo1 -> Lines -> Add("Номер паспорта" + IntToStr(res -> num));*/
	Memo1 -> Clear();
	Memo1 -> Lines -> Add(IntToStr(tr -> task(tr -> getroot())));

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	tr -> del(tr -> getroot(), StrToInt(Edit3 -> Text));
    show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Memo1 -> Clear();
	tr -> preOrder(tr -> getroot(), Memo1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	Memo1 -> Clear();
	tr -> pastOrder(tr -> getroot(), Memo1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	Memo1 -> Clear();
	List<Str> *l = new List<Str>;
	tr -> symmetric(tr -> getroot(), Memo1, l);
}
//---------------------------------------------------------------------------


