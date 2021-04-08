#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "train.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------

train s1(50, 550, 220, 75, 30);

__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	s1.returnTrain(Canvas);
	Timer1 -> Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
    s1.stopTrain(Canvas);
	Timer1 -> Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	s1.move(Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

