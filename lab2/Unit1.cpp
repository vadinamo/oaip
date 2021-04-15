//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "pacient.h"
#include <locale.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;

int picked, search_element, length = 0;

pacient<String> fio;
pacient<String> gender;
pacient<String> diagn;

pacient<int> age(10);
pacient<int> room_num(10);

pacient<int> reg_day(10);
pacient<int> reg_month(10);

pacient<int> dis_day(10);
pacient<int> dis_month(10);

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
			fio.add(ComboBox1 -> Text, length);
			ComboBox1 -> Items -> Add(fio[length]);
			gender.add(Edit1 -> Text, length);
			diagn.add(Edit3 -> Text, length);

			age.add(StrToInt(Edit2 -> Text), length);
			reg_day.add(StrToInt(Edit5 -> Text), length);
			reg_month.add(StrToInt(Edit6 -> Text), length);
			dis_day.add(StrToInt(Edit7 -> Text), length);
			dis_month.add(StrToInt(Edit8 -> Text), length);
			room_num.add(StrToInt(Edit4 -> Text), length);
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
		fio.remove(picked);
		ComboBox1 -> Items -> Delete(picked);
		gender.remove(picked);
		diagn.remove(picked);

		age.remove(picked);
		reg_day.remove(picked);
		reg_month.remove(picked);
		dis_day.remove(picked);
		dis_month.remove(picked);
		room_num.remove(picked);
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
	Memo1 -> Lines -> Add ("Ф.И.О.:" + fio[i]);
	Memo1 -> Lines -> Add ("Пол:" + gender[i]);
	Memo1 -> Lines -> Add ("Возраст:" + IntToStr(age[i]));
	Memo1 -> Lines -> Add ("Диагноз:" + diagn[i]);
	Memo1 -> Lines -> Add ("Палата:" + IntToStr(room_num[i]));

	Memo1 -> Lines -> Add ("Дата поступления:" + IntToStr(reg_day[i]) + "." + IntToStr(reg_month[i]));
	Memo1 -> Lines -> Add ("Дата выписки:" + IntToStr(dis_day[i])+ "." + IntToStr(dis_month[i]));

	Memo1 -> Lines -> Add("");
}

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	clear();
	switch (search_element) {

	case 1:
		for(int i = 0; i < length; i++) {
			if(StrToInt(Edit11 -> Text) == room_num[i]) {
				outp(i);
			}
		}
		break;

	case 2:
		for(int i = 0; i < length; i++) {
			if(Edit11 -> Text == gender[i]) {
				outp(i);
			}
		}
		break;

	case 3:
		for(int i = 0; i < length; i++) {
			if(Edit11 -> Text == diagn[i]) {
				outp(i);
			}
		}
		break;

	case 4:
		for(int i = 0; i < length; i++) {
			if(Edit11 -> Text == fio[i]) {
				outp(i);
            }
		}
        break;

	case 5:
		for(int i = 0; i < length; i++) {
			if(StrToInt(Edit11 -> Text) == age[i]) {
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
			fio.add(list -> Strings[n], length);
			n++;
			ComboBox1 -> Items -> Add(fio[length]);
			gender.add(list -> Strings[n], length);
			n++;
			diagn.add(list -> Strings[n], length);
			n++;
			age.add(StrToInt(list -> Strings[n]), length);
			n++;

			reg_day.add(StrToFloat(list -> Strings[n]), length);
			n++;
			reg_month.add(StrToFloat(list -> Strings[n]), length);
			n++;
			dis_day.add(StrToFloat(list -> Strings[n]), length);
			n++;
			dis_month.add(StrToFloat(list -> Strings[n]), length);
			n++;

			room_num.add(StrToInt(list -> Strings[n]), length);
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
			list -> Add (fio[i]);
			list -> Add (gender[i]);
			list -> Add (diagn[i]);
			list -> Add (age[i]);

			list -> Add (FloatToStr(reg_day[i]));
			list -> Add (FloatToStr(reg_month[i]));
			list -> Add (FloatToStr(dis_day[i]));
			list -> Add (FloatToStr(dis_month[i]));

			list -> Add (room_num[i]);
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

		String d = diagn[i];
		int num = 0;

		for(int j = 1; j < d.Length(); j++) {
			if(d[j] == ',') num++;
		}

		if(num >= 2) Memo1 -> Lines -> Add(IntToStr(room_num[i]));
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	clear();

	int reg_date[length];

	for(int i = 0; i < length; i++) {
		reg_date[i] = reg_day[i] + reg_month[i] * 30;
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
			if(reg_day[j] + reg_month[j] * 30 == reg_date[i]) outp(j);
		}
    }
}
//---------------------------------------------------------------------------

