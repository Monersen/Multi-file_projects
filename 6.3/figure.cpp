#include "Figure.h"
#include <iostream>
#include <string>

using namespace std;

void Figure::print()
{
    cout << name << ":" << endl;
    cout << "�������: ";
    print_sides();
    cout << endl;
    cout << "����: ";
    print_angles();
}

Figure::Figure(string name)
{
    this->name = name;
}

void Figure::print_sides()
{

}

void Figure::print_angles()
{

}