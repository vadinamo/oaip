//---------------------------------------------------------------------------

#ifndef trainH
#define trainH
#include "rectangle.cpp"
//---------------------------------------------------------------------------
class train : protected rectangle {
	protected:
		int radius;
        int smokey;
	public:
		train(int x, int y, int l, int h, int r) : rectangle(x, y, l, h) {radius = r;}

		void show(TCanvas *Canvas);

		void hide(TCanvas *Canvas);

		void move(TCanvas *Canvas);

        void stopTrain(TCanvas *Canvas);

		void returnTrain(TCanvas *Canvas);
};
#endif
