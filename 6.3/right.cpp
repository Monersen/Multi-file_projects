#include "Right.h"
#include <iostream>

using namespace std;

Right::Right(int sideA, int sideB, int sideC, int angleA, int angleB) : Figure("Прямоугольный треугольник:")
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

    this->angleA = angleA;
    this->angleB = angleB;
    angleC = 90;
}

void Right::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Right::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}