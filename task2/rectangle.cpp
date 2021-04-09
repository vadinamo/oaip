//---------------------------------------------------------------------------

#pragma hdrstop

#include "rectangle.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)

void rectangle::show(TCanvas* Canvas,int xch, int ych) {
	Canvas -> Pen -> Color = clBlack;
	Canvas -> Rectangle(x1 - xch, y1 - ych, x2 + xch, y2 + ych);
}

void rectangle::hide(TCanvas *Canvas, int xch, int ych) {
	Canvas -> Pen -> Color = clWhite;
	Canvas -> Rectangle(x1 - xch, y1 - ych, x2 + xch, y2 + ych);
}

void rectangle::massCenter() {
;
}

void rectangle::area() {
	ShowMessage("������� ���������������� S=" + IntToStr(abs((x1 - x2) * (y1 - y2))) + "����. ��.");
}

void rectangle::perimeter() {
	ShowMessage("�������� ���������������� P=" + IntToStr((abs(x1 - x2 + y1 - y2))*2) + "����.");
}

void rectangle::sizeChangeX (TCanvas *Canvas, int size) {
}

void sizeChangeY (TCanvas *Canvas, int size);
