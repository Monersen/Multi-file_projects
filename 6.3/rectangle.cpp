#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int sideA, int sideB) : Figure("Прямоугольник")
{
    this->sideA = sideA;
    this->sideB = sideB;
    sideC = sideA;
    sideD = sideB;

    angleA = 90;
    angleB = 90;
    angleC = 90;
    angleD = 90;
}

void Rectangle::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Rectangle::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}