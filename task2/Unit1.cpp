//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "rectangle.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int leftX, leftY, rightX, rightY, xch, ych;
rectangle rect(0, 0, 0, 0);

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	rect.hide(Canvas, xch, ych);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    rect.area();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	rect.perimeter();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::OndDoubleClick(TObject *Sender)
{
	int X; int Y;
	Canvas -> MoveTo(X, Y);
	leftX = X;
	leftY = Y;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int x, int y)
{
	leftX = x;
	leftY = y;
	rect.hide(Canvas, xch, ych);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int x, int y)
{
	rightX = x;
	rightY = y;
	rect.x1 = leftX;
	rect.x2 = rightX;
	rect.y1 = leftY;
	rect.y2 = rightY;
	rect.show(Canvas, xch, ych);
}

void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
	rect.hide(Canvas, xch, ych);
	xch = (ScrollBar1 -> Position) / 2;

	rect.show(Canvas, xch, ych);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar4Change(TObject *Sender)
{
	rect.hide(Canvas, xch, ych);
	ych = (ScrollBar4 -> Position) / 2;

	rect.show(Canvas, xch, ych);
}
//---------------------------------------------------------------------------

