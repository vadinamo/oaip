//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "rectangle.cpp"
#include "circle.cpp"
#include "ellipse.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int leftX, leftY, rightX, rightY, r1, r2, rch, r1ch, r2ch, newx, newy, shape;
rectangle rect(0, 0, 0, 0);
circle circ(0, 0, 0);
ellipse el(0, 0, 0, 0);

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
	shape = 0;
	rect.hide(Canvas, newx, newy, r1ch, r2ch);
	circ.hide(Canvas, rch, newx, newy);
	el.hide(Canvas, r1ch, r2ch, newx, newy);
	rect.x1 = 0;
	rect.x2 = 0;
	rect.y1 = 0;
	rect.y2 = 0;
	circ.x = 0;
	circ.y = 0;
	circ.r1 = 0;
	el.x = 0;
	el.y = 0;
	el.r1 = 0;
	el.r2  = 0;
	rch = 0;
	ScrollBar1 -> Position = 0;
	ScrollBar2 -> Position = 0;
	ScrollBar3 -> Position = 0;
	ScrollBar4 -> Position = 0;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
	switch (shape) {
		case 1:
			rect.area(newx, newy, r1ch, r2ch);
			break;
		case 2:
			circ.area(rch);
			break;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	switch (shape) {
		case 1:
			rect.perimeter(newx, newy, r1ch, r2ch);
			break;
		case 2:
			circ.perimeter(rch);
            break;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int x, int y)
{
	leftX = x;
	leftY = y;
	rect.hide(Canvas, newx, newy, r1ch, r2ch);
	circ.hide(Canvas, rch, newx, newy);
	el.hide(Canvas, r1ch, r2ch, newx, newy);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int x, int y)
{
	rect.hide(Canvas, newx, newy, r1ch, r2ch);
	circ.hide(Canvas, rch, newx, newy);
	el.hide(Canvas, r1ch, r2ch, newx, newy);
	rect.x1 = 0;
	rect.x2 = 0;
	rect.y1 = 0;
	rect.y2 = 0;
	circ.x = 0;
	circ.y = 0;
	circ.r1 = 0;
	el.x = 0;
	el.y = 0;
	el.r1 = 0;
	el.r2  = 0;
	rch = 0;
	ScrollBar1 -> Position = 0;
	ScrollBar2 -> Position = 0;
	ScrollBar3 -> Position = 0;
	ScrollBar4 -> Position = 0;
	rightX = x;
	rightY = y;
	switch (shape) {
		case 1:
			rect.x1 = leftX;
			rect.x2 = rightX;
			rect.y1 = leftY;
			rect.y2 = rightY;
			rect.show(Canvas, newx, newy, r1ch, r2ch);
			break;
		case 2:

			circ.x = leftX;
			circ.y = leftY;
			r1 = sqrt(abs(pow(rightX - leftX, 2)) + abs(pow(rightY - leftY, 2)));
			circ.r1 = r1;
			circ.show(Canvas, rch, newx, newy);
			break;
		case 3:
			el.x = leftX;
			el.y = leftY;
			el.r1 = abs(rightX - leftX);
			el.r2 = abs(rightY - leftY);
			el.show(Canvas, r1ch, r2ch, newx, newy);
	}
}



void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
	if (shape == 1) {
		rect.hide(Canvas, newx, newy, r1ch, r2ch);
		newx = ScrollBar1 -> Position;
		newy = ScrollBar4 -> Position;
		rect.show(Canvas, newx, newy, r1ch, r2ch);
	}

	else if (shape == 2 ) {

		circ.hide(Canvas, r1ch, newx, newy);
		newx = ScrollBar1 -> Position;
		newy = ScrollBar4 -> Position;
		circ.show(Canvas, r1ch, newx, newy);
	}

	else if (shape == 3) {
		el.hide(Canvas, r1ch, r2ch, newx, newy);
		newx = ScrollBar1 -> Position;
		newy = ScrollBar4 -> Position;
		el.show(Canvas, r1ch, r2ch, newx, newy);
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar4Change(TObject *Sender)
{
	if (shape == 1) {
		rect.hide(Canvas, newx, newy, r1ch, r2ch);
		newx = ScrollBar1 -> Position;
		newy = ScrollBar4 -> Position;
		rect.show(Canvas, newx, newy, r1ch, r2ch);
	}

	else if (shape == 2 ) {

		circ.hide(Canvas, r1ch, newx, newy);
		newx = ScrollBar1 -> Position;
		newy = ScrollBar4 -> Position;
		circ.show(Canvas, r1ch, newx, newy);
	}

    else if (shape == 3) {
		el.hide(Canvas, r1ch, r2ch, newx, newy);
		newx = ScrollBar1 -> Position;
		newy = ScrollBar4 -> Position;
		el.show(Canvas, r1ch, r2ch, newx, newy);
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button7Click(TObject *Sender)
{
	el.hide(Canvas, r1ch, r2ch, newx, newy);
	rect.hide(Canvas, newx, newy, r1ch, r2ch);
	shape = 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	el.hide(Canvas, r1ch, r2ch, newx, newy);
	circ.hide(Canvas, rch, newx, newy);
	shape = 1;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ScrollBar3Change(TObject *Sender)
{
    if (shape == 1) {
		rect.hide(Canvas, newx, newy, r1ch, r2ch);
		r2ch = (ScrollBar3 -> Position) / 2;

		rect.show(Canvas, newx, newy, r1ch, r2ch);
	}
	else if(shape == 2) {
		circ.hide(Canvas, rch, newx, newy);

		rch = r2ch;

		r1ch = ScrollBar2 -> Position;
		r2ch = ScrollBar3 -> Position;
		circ.show(Canvas, rch, newx, newy);
	}
    else if (shape == 3) {
			el.hide(Canvas, r1ch, r2ch, newx, newy);

			r1ch = ScrollBar2 -> Position;
			r2ch = ScrollBar3 -> Position;

			el.show(Canvas, r1ch, r2ch, newx, newy);
		 }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar2Change(TObject *Sender)
{
    if(shape == 1) {
		rect.hide(Canvas, newx, newy, r1ch, r2ch);
		r1ch = (ScrollBar2 -> Position) / 2;

		rect.show(Canvas, newx, newy, r1ch, r2ch);
	}
	else if(shape == 2) {
		circ.hide(Canvas, rch, newx, newy);

		rch = r1ch;

		r1ch = ScrollBar2 -> Position;
		r2ch = ScrollBar3 -> Position;
		circ.show(Canvas, rch, newx, newy);
	}
	else if (shape == 3) {
			el.hide(Canvas, r1ch, r2ch, newx, newy);

			r1ch = ScrollBar2 -> Position;
			r2ch = ScrollBar3 -> Position;

			el.show(Canvas, r1ch, r2ch, newx, newy);
		 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	circ.hide(Canvas, rch, newx, newy);
	rect.hide(Canvas, newx, newy, r1ch, r2ch);
	shape = 3;
}
//---------------------------------------------------------------------------


