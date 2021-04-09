//---------------------------------------------------------------------------

#pragma hdrstop

#include "ellipse.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)

void ellipse::show(TCanvas *Canvas, int r1ch, int r2ch, int newx, int newy) {
	Canvas -> Pen -> Color = clBlack;
	Canvas -> Ellipse(x - r1 - r1ch + newx, y - r2 - r2ch + newy, x + r1 + r1ch + newx, y + r2 + r2ch + newy);
}

void ellipse::hide(TCanvas *Canvas, int r1ch, int r2ch, int newx, int newy) {
	Canvas -> Pen -> Color = clWhite;
	Canvas -> Ellipse(x - r1 - r1ch + newx, y - r2 - r2ch + newy, x + r1 + r1ch + newx, y + r2 + r2ch + newy);
}
