//---------------------------------------------------------------------------

#ifndef trainH
#define trainH
#include "rectangle.cpp"
//---------------------------------------------------------------------------
class train : protected rectangle {
	protected:
		int radius;
        int smokex, smokey;
	public:
		train(int x, int y, int l, int h, int r) : rectangle(x, y, l, h) {radius = r;}

		void show(TCanvas *Canvas);

		void hide(TCanvas *Canvas);

		void move(TCanvas *Canvas);
};
#endif
