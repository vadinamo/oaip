//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "vector.h"
#include "pacient.h"
#include <locale.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

int picked, search_element, length = 0;

vector <Pacient> pacient;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
	exit(0);
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if (Edit1 -> Text == "М" || Edit1 -> Text == "Ж") {


    String fio, gender, diagn;
	int age, room_num, reg_day, reg_month, dis_day, dis_month;

	Pacient *p = new Pacient;
		p -> fio = ComboBox1 -> Text;
		p -> gender = Edit1 -> Text;
		p -> diagn = Edit3 -> Text;
		p -> age = StrToInt(Edit2 -> Text);
		p -> room_num = StrToInt(Edit4 -> Text);
		p -> reg_day = StrToInt(Edit5 -> Text);
		p -> reg_month = StrToInt(Edit6 -> Text);
		p -> dis_day = StrToInt(Edit7 -> Text);
		p -> dis_month = StrToInt(Edit8 -> Text);

		ComboBox1 -> Items -> Add(ComboBox1 -> Text);
		pacient.add(*p, length);

			length++;
	}

	else ShowMessage("Укажите пол корректно!");
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
	clear();
}

void __fastcall TForm1::clear() {
	Edit1 -> Text = "";
	Edit2 -> Text = "";
	Edit3 -> Text = "";
	Edit4 -> Text = "";
	Edit5 -> Text = "";
	Edit6 -> Text = "";
	Edit7 -> Text = "";
	Edit8 -> Text = "";

	ComboBox1 -> Text = "";

	Memo1 -> Clear();
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	picked = ComboBox1 -> ItemIndex;
	if (picked >= 0) {
		ComboBox1 -> Items -> Delete(picked);
		pacient.remove(picked);
	}
	length--;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
    search_element = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
    search_element = 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
    search_element = 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
	search_element = 4;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton5Click(TObject *Sender)
{
	search_element = 5;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::outp(int i) {
	Memo1 -> Lines -> Add ("Ф.И.О.:" + pacient[i].fio);
	Memo1 -> Lines -> Add ("Пол:" + pacient[i].gender);
	Memo1 -> Lines -> Add ("Возраст:" + IntToStr(pacient[i].age));
	Memo1 -> Lines -> Add ("Диагноз:" + pacient[i].diagn);
	Memo1 -> Lines -> Add ("Палата:" + IntToStr(pacient[i].room_num));

	Memo1 -> Lines -> Add ("Дата поступления:" + IntToStr(pacient[i].reg_day) + "." + IntToStr(pacient[i].reg_month));
	Memo1 -> Lines -> Add ("Дата выписки:" + IntToStr(pacient[i].dis_day)+ "." + IntToStr(pacient[i].dis_month));

	Memo1 -> Lines -> Add("");
}

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	clear();
	switch (search_element) {

	case 1:
		for(int i = 0; i < length; i++) {
			if(StrToInt(Edit11 -> Text) == pacient[i].room_num) {
				outp(i);
			}
		}
		break;

	case 2:
		for(int i = 0; i < length; i++) {
			if(Edit11 -> Text == pacient[i].gender) {
				outp(i);
			}
		}
		break;

	case 3:
		for(int i = 0; i < length; i++) {
			if(Edit11 -> Text == pacient[i].diagn) {
				outp(i);
			}
		}
		break;

	case 4:
		for(int i = 0; i < length; i++) {
			if(Edit11 -> Text == pacient[i].fio) {
				outp(i);
            }
		}
        break;

	case 5:
		for(int i = 0; i < length; i++) {
			if(StrToInt(Edit11 -> Text) == pacient[i].age) {
				outp(i);
			}
		}
		break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	TStringList *list = new TStringList;
	if(FileOpenDialog1 -> Execute())
	{
		list -> LoadFromFile(FileOpenDialog1 -> FileName);
		int n = 0;
		for(int i = 0; i < (list -> Count) / 10; i++) {

		Pacient *p = new Pacient;
		p -> fio = list -> Strings[n];
		ComboBox1 -> Items -> Add(list -> Strings[n]);
		n++;
		p -> gender = list -> Strings[n];
		n++;

		p -> diagn = list -> Strings[n];
		n++;
		p -> age = StrToInt(list -> Strings[n]);
		n++;

		p -> reg_day = StrToInt(list -> Strings[n]);
		n++;
		p -> reg_month = StrToInt(list -> Strings[n]);
		n++;
		p -> dis_day = StrToInt(list -> Strings[n]);
		n++;
		p -> dis_month = StrToInt(list -> Strings[n]);
		n++;

		p -> room_num = StrToInt(list -> Strings[n]);

		pacient.add(*p, length);
		n += 2;
		length++;
		}
	}
	delete list;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	FileSaveDialog1 -> FileName = "Pacients.txt";

	if(FileSaveDialog1 -> Execute()) {
		TStringList *list = new TStringList;

		for(int i = 0; i < length; i++) {
			list -> Add (pacient[i].fio);
			list -> Add (pacient[i].gender);
			list -> Add (pacient[i].diagn);
			list -> Add (pacient[i].age);

			list -> Add (IntToStr(pacient[i].reg_day));
			list -> Add (IntToStr(pacient[i].reg_month));
			list -> Add (IntToStr(pacient[i].dis_day));
			list -> Add (IntToStr(pacient[i].dis_month));

			list -> Add (IntToStr(pacient[i].room_num));
			list -> Add("");
		}
		list -> SaveToFile(FileSaveDialog1 -> FileName);
		delete list;
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button7Click(TObject *Sender)
{
	clear();
	for(int i = 0; i < length; i++) {

		String d = pacient[i].diagn;
		int num = 0;

		for(int j = 1; j < d.Length(); j++) {
			if(d[j] == ',') num++;
		}

		if(num >= 2) Memo1 -> Lines -> Add(IntToStr(pacient[i].room_num));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	clear();

	int reg_date[length];

	for(int i = 0; i < length; i++) {
		reg_date[i] = pacient[i].reg_day + pacient[i].reg_month * 30;
	}

	int buffer;

	for(int i = 0; i < length; i++){
		for(int j = (length - 1); j >= (i + 1); j--){
			if(reg_date[j] > reg_date[j - 1]) {
				buffer = reg_date[j];
				reg_date[j] = reg_date[j - 1];
				reg_date[j - 1] = buffer;
			}
		}
	}

	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++) {
			if(pacient[j].reg_day + pacient[j].reg_month * 30 == reg_date[i]) outp(j);
		}
    }
}
//---------------------------------------------------------------------------

