//---------------------------------------------------------------------------

#ifndef circleH
#define circleH
#include "figure.cpp"
//---------------------------------------------------------------------------
class circle{
	public:
		int r1, x, y;
	public:
		circle(int x1, int y1, int radius) : x(x1), y(y1), r1(radius) {};

		void show(TCanvas *Canvas, int rch, int newx, int newy);

		void hide(TCanvas *Canvas, int rch, int newx, int newy);

		void area(int rch);

		void perimeter(int rch);
};

#endif
