#include "Isosceles.h"
#include <iostream>

using namespace std;

Isosceles::Isosceles(int sideA, int sideB, int angleA, int angleB) : Figure("Равнобедренный треугольник")
{
    this->sideA = sideA;
    this->sideB = sideB;
    sideC = sideA;

    this->angleA = angleA;
    this->angleB = angleB;
    angleC = angleA;
}

void Isosceles::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC;
}

void Isosceles::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC;
}