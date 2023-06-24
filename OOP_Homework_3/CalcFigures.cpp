#include <iostream>
#include "CalcFigures.h"
using namespace std;

void CalcFigures::ShowArea(const Figures& f)
{
    Square* square = f.getS();
    Triangle* triangle = f.getT();

    if (square != nullptr)
    {
        int area = square->getSideA() * square->getSideB();
        cout << "Square Area: " << area << endl;
    }

    if (triangle != nullptr)
    {
        int a = triangle->getSideA();
        int b = triangle->getSideB();
        int c = triangle->getSideC();
        double s = (a + b + c) / 2.0; 
        double area = std::sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Triangle Area: " << area << endl;
    }
}

void CalcFigures::ShowPerimeter(const Figures& f)
{
    Square* square = f.getS();
    Triangle* triangle = f.getT();

    if (square != nullptr)
    {
        int perimeter = 2 * (square->getSideA() + square->getSideB());
        cout << "Square Perimeter: " << perimeter << endl;
    }

    if (triangle != nullptr)
    {
        int perimeter = triangle->getSideA() + triangle->getSideB() + triangle->getSideC();
        cout << "Triangle Perimeter: " << perimeter << endl;
    }
}

void CalcFigures::ShowFiguresCMD(const Figures& f)
{
    cout << f.ToString() << endl;
}