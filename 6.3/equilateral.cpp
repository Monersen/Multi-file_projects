#include "Equilateral.h"
#include <iostream>

using namespace std;

Equilateral::Equilateral(int sideA) : Figure("Равносторонний треугольник")
{
    this->sideA = sideA;
    sideB = sideA;
    sideC = sideA;

    angleA = 60;
    angleB = 60;
    angleC = 60;
}

void Equilateral::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Equilateral::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}