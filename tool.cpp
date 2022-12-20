#include "tool.h"

/* Definiciones de Pen */
Pen::Pen(void)
{
	;
}

Pen::Pen(const Pen &p)
{
	;
}

Pen::~Pen(void)
{
	std::cout<<"Destroying Pen..."<<std::endl;
}

Pen& Pen::operator=(const Pen &op)
{
	return *this;
}

void Pen::write(void)
{
	std::cout<<"Writing with Pen..."<<std::endl;
}

void Pen::acquire(void)
{
	++count;
}

void Pen::release(void)
{
	--count;
	if(count == 0) delete this;
}

//---------------------------------------------------------

/* Definiciones de Pencil */
Pencil::Pencil(void)
{
	;
}

Pencil::Pencil(const Pencil &p)
{
	;
}

Pencil::~Pencil(void)
{
	std::cout<<"Destroying Pencil..."<<std::endl;
}

Pencil& Pencil::operator=(const Pencil &op)
{
	return *this;
}

void Pencil::write(void)
{
	std::cout<<"Writing with Pencil..."<<std::endl;
}

void Pencil::acquire(void)
{
	++count;
}

void Pencil::release(void)
{
	--count;
	if(count == 0) delete this;
}
