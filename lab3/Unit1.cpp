//---------------------------------------------------------------------------

#include <vcl.h>
#include "list.h"
#include "Bus.h"
#include "Error.h"
#pragma hdrstop

#include "Unit1.h"
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

List<Bus> inPark;
List<Bus> onWay;
Bus bus;
int picked, i = 0;
int _number, _departureTime, _arrivalTime, _status;
String _busType, _destination;

void TForm1::Clear() {
	ComboBox1 -> Text = "";
	Edit1 -> Text = "";
	Edit2 -> Text = "";
	Edit3 -> Text = "";
	Edit4 -> Text = "";
	Edit5 -> Text = "";
	Edit6 -> Text = "";
	Edit7 -> Text = "";
	Edit8 -> Text = "";
	Edit9 -> Text = "";
	Edit10 -> Text = "";
	Edit11 -> Text = "";
	Memo1 -> Clear();
}

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	Clear();
	Memo1 -> Lines -> Add("В парке:");
	Memo1 -> Lines -> Add("");
	inPark.Display(Memo1);
	Memo1 -> Lines -> Add("");
	Memo1 -> Lines -> Add("В пути:");
	Memo1 -> Lines -> Add("");
	onWay.Display(Memo1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	try {
        bus.Number(StrToInt(ComboBox1 -> Text));
		bus.BusType(Edit1 -> Text);
		bus.Destination(Edit2 -> Text);
		bus.DepartureTime((StrToInt(Edit3 -> Text) * 60 + StrToInt(Edit4 -> Text)));
		bus.ArrivalTime((StrToInt(Edit5 -> Text) * 60 + StrToInt(Edit6 -> Text)));
		bus.Status(1);
		ComboBox1 -> Items -> Add(ComboBox1 -> Text);
		inPark.Add(bus);

		Clear();
	}

	catch (...) {
		ShowMessage("Проверьте правильность введенных данных!");
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	picked = ComboBox1 -> ItemIndex;
	if (picked >= 0) {
		ComboBox1 -> Items -> Delete(picked);
		inPark.Delete(picked);
	}

	Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	int time;
	if(Edit8 -> Text != "" && Edit9 -> Text != "") {
		time = StrToInt(Edit8 -> Text) * 60 + StrToInt(Edit9 -> Text);
	}

	else {
		time = -1;
	}

	String dest = Edit7 -> Text;
	Clear();
	inPark.Search(Memo1, dest, time);
    if(Memo1 -> Lines -> Count == 0) Memo1 -> Lines -> Add("Подходящих автобусов не найдено.");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{
	int index = inPark.SearchByNumber(StrToInt(Edit11 -> Text));
	if(index != -1) {
		onWay.Add(inPark[index]);
		inPark.Delete(index);
	}

	Clear();

	if(index == -1) Memo1 -> Lines -> Add("Автобус не найден.");
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button5Click(TObject *Sender)
{
	int index = onWay.SearchByNumber(StrToInt(Edit10 -> Text));
	if(index != -1) {
		inPark.Add(onWay[index]);
		onWay.Delete(index);
	}

	Clear();

	if(index == -1) Memo1 -> Lines -> Add("Автобус не найден.");
}
//---------------------------------------------------------------------------

