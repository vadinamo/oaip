//---------------------------------------------------------------------------

#ifndef rectangleH
#define rectangleH
#include "figure.cpp"
//---------------------------------------------------------------------------
class rectangle : public figure {
	public:
		rectangle(int x1, int y1, int x2, int y2) : figure (x1, y1, x2, y2) {};

		void show(TCanvas *Canvas,int xch, int ych);

		void hide(TCanvas *Canvas, int xch, int ych);

		void massCenter();

		void area();

		void perimeter();

		void move(TCanvas *Canvas, int newx, int newy);

		void sizeChangeX (TCanvas *Canvas, int size);

        void sizeChangeY (TCanvas *Canvas, int size);
};
#endif
