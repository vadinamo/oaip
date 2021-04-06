//---------------------------------------------------------------------------

#pragma hdrstop

#include "rectangle.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void rectangle::show(TCanvas *Canvas) {
	Canvas -> Pen -> Width = 5;
	Canvas -> Pen -> Color = clYellow;
	Canvas -> Brush -> Color = clGreen;
	Canvas -> Rectangle(x, y, x + length, y - height);
}

void rectangle::hide(TCanvas *Canvas) {
	Canvas -> Pen -> Color = clSkyBlue;
	Canvas -> Brush -> Color = clSkyBlue;
	Canvas -> Rectangle(x, y, x + length, y - height);
}

void rectangle::move(TCanvas *Canvas, int x1, int y1) {
	hide(Canvas);
	x = x1;
	y = y1;
	show(Canvas);
}
