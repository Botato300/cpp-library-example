#pragma once
#include <iostream>

#define interface struct
#define extend public
#define implement public

interface IInstance
{
	virtual void acquire() = 0;
	virtual void release() = 0;
};

interface ITool : extend IInstance
{
	virtual void write() = 0;
};

class Pen : implement ITool
{
	private:
		int count;
		Pen(const Pen&);
		Pen& operator=(const Pen&);
	public:
		Pen(void);
		virtual ~Pen(void);
		void write(void);
		void acquire(void);
		void release(void);
};

class Pencil: implement ITool
{
	private:
		int count;
		Pencil(const Pencil&);
		Pencil& operator=(const Pencil&);
	public:
		Pencil(void);
		virtual ~Pencil(void);
		void write(void);
		void acquire(void);
		void release(void);
};