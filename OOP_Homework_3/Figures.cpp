#include "Figures.h"
using namespace std;

Figures::Figures()
	: _sizeS(0), _sizeT(0), _s(nullptr), _t(nullptr) { }

Figures::Figures(const Figures& other)
	: _sizeS(other._sizeS), _sizeT(other._sizeT), _s(nullptr), _t(nullptr)
{
	if (other._s != nullptr)
		_s = new Square(*other._s);
	if (other._t != nullptr)
		_t = new Triangle(*other._t);
}

Figures::~Figures()
{
	delete _s;
	delete _t;
}

// getters
int Figures::getSizeS() const
{
	return _sizeS;
}

int Figures::getSizeT() const
{
	return _sizeT;
}

// setters
void Figures::setSizeS(int sizeS)
{
	_sizeS = sizeS;
}

void Figures::setSizeT(int sizeT)
{
	_sizeT = sizeT;
}

Square* Figures::getS() const
{
	return _s;
}

void Figures::setS(Square* square)
{
	_s = square;
}

Triangle* Figures::getT() const
{
	return _t;
}

void Figures::setT(Triangle* triangle)
{
	_t = triangle;
}

string Figures::ToString() const
{
	return "Figures: Size S = " + to_string(_sizeS) + ", Size T = " + to_string(_sizeT);
}