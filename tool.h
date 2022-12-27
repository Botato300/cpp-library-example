#pragma once
#include <iostream>

#define interface struct
#define extend public
#define implement public

interface IObject
{
	virtual void acquire() = 0;
	virtual void release() = 0;
};

interface ITool : extend IObject
{
	virtual void write() = 0;
};

class Pen : implement ITool
{
	private:
		int posX;
		int posY;
		int ref_count;
		Pen(const Pen&);
		Pen& operator=(const Pen&);
	public:
		Pen(void);
		Pen(int, int);
		virtual ~Pen(void);
		void write(void);
		void acquire(void);
		void release(void);
};

ITool* createPen(int posX = 0, int posY = 0);
