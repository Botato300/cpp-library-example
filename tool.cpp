#include "tool.h"

Pen::Pen(void)
{
	std::cout<<"Pen created."<<std::endl;
	posX = 0;
	posY = 0;
	ref_count = 0;
}

Pen::Pen(int posX, int posY)
{
	std::cout<<"Pen created."<<std::endl;
	this->posX = posX;
	this->posY = posY;
	ref_count = 0;
}

Pen::Pen(const Pen &p)
{
	posX = p.posX;
	posY = p.posY;
	ref_count = 0;
}

Pen& Pen::operator=(const Pen&) = default;

Pen::~Pen(void)
{
	std::cout<<"Pen destroyed."<<std::endl;
}

void Pen::write(void)
{
	std::cout<<"Writing with Pen... (at coordinate "<<posX<<"x,"<<" "<<posY<<"y)\n"<<std::endl;
}
void Pen::acquire(void)
{
	++ref_count;
	std::cout<<"A reference to Pen has been created. Current references: "<<ref_count<<std::endl;
}

void Pen::release(void)
{
	--ref_count;
	std::cout<<"A reference to Pen has been deleted. Current references: "<<ref_count<<std::endl;
	if(ref_count == 0) delete this;
}

ITool* createPen(int posX, int posY){
	return (ITool*) new Pen(posX, posY);
}
