#include <iostream>
#include "CalcFigures.h"
using namespace std;

int main()
{
	Figures figures;

	CalcFigures::ShowArea(figures);
	CalcFigures::ShowPerimeter(figures);
	CalcFigures::ShowFiguresCMD(figures);

	system("pause");

	return 0;
}