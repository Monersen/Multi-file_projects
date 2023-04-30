#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(int sideA) : Figure(" вадрат")
{
    this->sideA = sideA;
    sideB = sideA;
    sideC = sideA;
    sideD = sideA;

    angleA = 90;
    angleB = 90;
    angleC = 90;
    angleD = 90;
}

void Square::print_sides()
{
    cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Square::print_angles()
{
    cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}