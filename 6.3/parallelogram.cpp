#include "Parallelogram.h"
#include <iostream>

using namespace std;

Parallelogram::Parallelogram(int sideA, int sideB, int angleA, int angleB) : Figure("ֿאנאככוכמדנאלל")
{
    this->sideA = sideA;
    this->sideB = sideB;
    sideC = sideA;
    sideD = sideB;

    this->angleA = angleA;
    this->angleB = angleB;
    angleC = angleA;
    angleD = angleB;
}

void Parallelogram::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Parallelogram::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}