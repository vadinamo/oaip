//---------------------------------------------------------------------------

#ifndef ellipseH
#define ellipseH
#include "circle.h"
//---------------------------------------------------------------------------

class ellipse : public circle{
	public:

		int r2;

		ellipse (int x, int y, int r1, int rad2) : circle (x, y, r1) {r2 = rad2;}

		void show(TCanvas *Canvas, int r1ch, int r2ch, int newx, int newy);
		void hide(TCanvas *Canvas, int r1ch, int r2ch, int newx, int newy);
		void area(int r1ch, int r2ch, int newx, int newy);
		void perimeter(int r1ch, int r2ch, int newx, int newy);
};
#endif
