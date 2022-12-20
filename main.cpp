#include "tool.h"

int main()
{
	ITool* p = new Pen;
	p->acquire();
	p->write();
	p->release();

	return 0;
}