#include "Triangle.h"
using namespace std;

Triangle::Triangle(int sideA, int sideB, int sideC)
	: a(sideA), b(sideB), c(sideC) { }

int Triangle::getSideA() const
{
	return a;
}

int Triangle::getSideB() const
{
	return b;
}

int Triangle::getSideC() const
{
	return c;
}

void Triangle::setSideA(int sideA)
{
	a = sideA;
}

void Triangle::setSideB(int sideB)
{
	b = sideB;
}

void Triangle::setSideC(int sideC)
{
	c = sideC;
}

string Triangle::ToString() const
{
	return "Triangle: Side A = " + to_string(a) + ", Side B = " + to_string(b) +
		", Side C = " + to_string(c);
}