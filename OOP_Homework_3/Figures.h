#pragma once
#include "Triangle.h"
#include "Square.h"
using namespace std;

class Figures
{
public:
	Figures();
	Figures(const Figures& other);
	~Figures();
	int getSizeS() const;
	int getSizeT() const;
	void setSizeS(int sizeS);
	void setSizeT(int sizeT);

	Square* getS() const;
	void setS(Square* square);

	Triangle* getT() const;
	void setT(Triangle* triangle);

	string ToString() const;
private:
	int _sizeS;
	int _sizeT;
	Square* _s;
	Triangle* _t;
};