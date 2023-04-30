#include "mFunc.h"

double add(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mul(double x, double y) {
    return x * y;
}

double div(double x, double y) {
    if (y == 0)
        throw "������� �� ����";
    return x / y;
}

double pow(double x, double y)
{
    if (y == 0)
        return 1;

    bool neg = false;

    if (y < 0)
    {
        y = -y;
        neg = true;
    }

    double sum = 1;
    while (y--) sum *= x;

    if (neg)
        return 1 / sum;
    else
        return sum;
}