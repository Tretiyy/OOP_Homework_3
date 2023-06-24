#include "Square.h"
using namespace std;

Square::Square(int sideA, int sideB)
	: a(sideA), b(sideB) { }

int Square::getSideA() const
{
	return a;
}

int Square::getSideB() const
{
	return b;
}

void Square::setSideA(int sideA)
{
	a = sideA;
}

void Square::setSideB(int sideB)
{
	b = sideB;
}

string Square::ToString() const
{
	return "Square: Side A = " + to_string(a) + ", Side B = " + to_string(b);
}