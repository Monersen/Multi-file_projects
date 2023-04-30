#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(int sideA, int sideB, int sideC, int angleA, int angleB, int angleC) : Figure("Треугольник")
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;

    this->angleA = angleA;
    this->angleB = angleB;
    this->angleC = angleC;
}

void Triangle::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Triangle::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}