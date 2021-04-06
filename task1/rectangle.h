//---------------------------------------------------------------------------

#ifndef rectangleH
#define rectangleH
#include <vcl.h>
class rectangle {
	protected:
		int x, y, length, height;
	public:
		rectangle(int x1, int y1, int l, int h) : x(x1), y(y1), length(l), height(h) {};
		void show(TCanvas *Canvas);
		void hide(TCanvas *Canvas);
		void move(TCanvas *Canvas, int x1, int x2);
};
//---------------------------------------------------------------------------
#endif
