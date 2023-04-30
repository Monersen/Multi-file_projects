#include <iostream>
#include <windows.h>
#include "figure.h"
#include "triangle.h"
#include "right.h"
#include "isosceles.h"
#include "equilateral.h"
#include "quadrilateral.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhombus.h"

using namespace std;

void print(Figure& figure)
{
    figure.print();
    cout << endl;
    cout << endl;
}

int main(int argc, char** argv)
{
    //setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle trian(10, 20, 30, 50, 60, 70);
    Right right(10, 20, 30, 50, 60);
    Isosceles isos(10, 20, 50, 60);
    Equilateral equil(10);
    Quadrilateral quad(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rect(10, 20);
    Square square(20);
    Parallelogram parall(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print(trian);
    print(right);
    print(isos);
    print(equil);
    print(quad);
    print(rect);
    print(square);
    print(parall);
    print(rhombus);

    return 0;
}
