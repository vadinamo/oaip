﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "train.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void train::show(TCanvas *Canvas) {                    //лев верхн, прав нижн
	rectangle::show(Canvas);    //корпус

	Canvas -> Pen -> Color = clYellow;    //кабина
	Canvas -> Brush -> Color = clGreen;
	Canvas -> Rectangle(x + 10, y - height - 50, x + 110, y - height);

	Canvas -> Pen -> Color = cl3DDkShadow;    //дым
	Canvas -> Brush -> Color = cl3DDkShadow;
	Canvas -> Ellipse(x + length - 36 - radius / 2, y - height - 60 + radius, x + length - 55 + radius / 2, y - height - 20 - radius);
	Canvas -> Ellipse(x + length - 20 - radius / 2, y - height - 50 + radius, x + length - 40 + radius / 2, y - height - 20 - radius);
	Canvas -> Ellipse(x + length - 29 - radius / 2, y - height - 40 + radius, x + length - 45 + radius / 2, y - height - radius);

	Canvas -> Pen -> Color = clScrollBar;     //труба
	Canvas -> Brush -> Color = clMedGray;
	Canvas -> Rectangle(x + length - 55, y - height -  60, x + length - 17, y - height);

	Canvas -> Pen -> Color = clWhite;   //колеса
	Canvas -> Brush -> Color = clRed;
	Canvas -> Ellipse(x + 35 - radius, y + height - 70 + radius, x + 35 + radius, y + height - 70 - radius);
	Canvas -> Ellipse(x + 110 - radius, y + height - 70 + radius, x + 110 + radius, y + height - 70 - radius);
	Canvas -> Ellipse(x + 185 - radius, y + height - 70 + radius, x + 185 + radius, y + height - 70 - radius);
}

void train::hide(TCanvas *Canvas) {
	rectangle::hide(Canvas);

	Canvas -> Pen -> Color = clSkyBlue;
	Canvas -> Brush -> Color = clSkyBlue;
	Canvas -> Rectangle(x + 10, y - height - 50, x + 110, y - height);

	Canvas -> Pen -> Color = clSkyBlue;
	Canvas -> Brush -> Color = clSkyBlue;
	Canvas -> Ellipse(x + length - 36 - radius / 2, y - height - 60 + radius, x + length - 55 + radius / 2, y - height - 20 - radius);
	Canvas -> Ellipse(x + length - 20 - radius / 2, y - height - 50 + radius, x + length - 40 + radius / 2, y - height - 20 - radius);
	Canvas -> Ellipse(x + length - 29 - radius / 2, y - height - 40 + radius, x + length - 45 + radius / 2, y - height - radius);

	Canvas -> Pen -> Color = clSkyBlue;
	Canvas -> Brush -> Color = clSkyBlue;
	Canvas -> Rectangle(x + length - 55, y - height -  60, x + length - 17, y - height);

	Canvas -> Pen -> Color = clSkyBlue;
	Canvas -> Brush -> Color = clSkyBlue;
	Canvas -> Ellipse(x + 35 - radius, y + height - 70 + radius, x + 35 + radius, y + height - 70 - radius);
	Canvas -> Ellipse(x + 110 - radius, y + height - 70 + radius, x + 110 + radius, y + height - 70 - radius);
	Canvas -> Ellipse(x + 185 - radius, y + height - 70 + radius, x + 185 + radius, y + height - 70 - radius);
	Canvas -> Pen -> Color = clBlack;
	Canvas -> Brush -> Color = clBlack;

}

void train::move(TCanvas *Canvas/*, int x1, int y1*/) {
	train::hide(Canvas);
	if (x + length < 1240) {
		x += 2;
		train::show(Canvas);
	}
	else {
		ShowMessage("Вы прибыли.");
		train::hide(Canvas);
	}
}
