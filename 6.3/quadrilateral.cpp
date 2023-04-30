#include "Quadrilateral.h"
#include <iostream>

using namespace std;

Quadrilateral::Quadrilateral(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD) : Figure("Четырёхугольник")
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
    this->sideD = sideD;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
    this->angleD = angleD;
}

void Quadrilateral::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Quadrilateral::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}