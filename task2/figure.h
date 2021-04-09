//---------------------------------------------------------------------------

#ifndef figureH
#define figureH
#include <vcl.h>
//---------------------------------------------------------------------------
class figure {
	public:
		int x1, y1, x2, y2;
		figure(int x11, int y11, int x12, int y12) : x1(x11), y1(y11), x2(x12), y2(y12) {};
};
#endif

