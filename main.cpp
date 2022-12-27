#include "tool.h"

int main()
{
	ITool* pen = createPen(10, 15);
	pen->write();

	ITool* &pen_ref = pen;
	pen_ref->acquire();
	pen_ref->write();

	ITool* &pen_ref2 = pen;
	pen_ref2->acquire();
	pen_ref2->write();

	ITool* &pen_ref3 = pen;
	pen_ref3->acquire();
	pen_ref3->write();

	pen_ref->release();
	pen_ref2->release();
	pen_ref3->release();

	return 0;
}
