#pragma once
#include <string>

using namespace std;

class Figure
{
public:
	void print();

protected:
	Figure(string name);

	virtual void print_sides();

	virtual void print_angles();

private:
	string name;
};