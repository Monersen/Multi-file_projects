#ifndef MATHFUNC_H
#define MATHFUNC_H

enum operation
{
    ADD = 1,
    SUB,
    MUL,
    DIV,
    POW
};

double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
double pow(double, double);
#endif