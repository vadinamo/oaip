//---------------------------------------------------------------------------

#pragma hdrstop

#include "rectangle.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)

void rectangle::show(TCanvas* Canvas, int newx, int newy, int xch, int ych) {
	Canvas -> Pen -> Color = clBlack;
	Canvas -> Rectangle(x1 - xch + newx, y1 - ych + newy, x2 + xch + newx, y2 + ych + newy);
}

void rectangle::hide(TCanvas* Canvas, int newx, int newy, int xch, int ych) {
	Canvas -> Pen -> Color = clWhite;
	Canvas -> Rectangle(x1 - xch, y1 - ych, x2 + xch, y2 + ych);
	Canvas -> Rectangle(x1 - xch + newx, y1 - ych + newy, x2 + xch + newx, y2 + ych + newy);
}

void rectangle::area(int newx, int newy, int xch, int ych) {
	int S = abs((x2 + xch + newx - x1 + xch - newx) * (y2 + ych + newy - y1 + ych - newy));
	ShowMessage("Площадь четырехугольника S=" + IntToStr(S) + "пикс. кв.");
}

void rectangle::perimeter(int newx, int newy, int xch, int ych) {
	int P = 2 * abs(x2 + xch + newx - x1 + xch - newx + y2 + ych + newy - y1 + ych - newy);
	ShowMessage("Периметр четырехугольника P=" + IntToStr(P) + "пикс.");
}

