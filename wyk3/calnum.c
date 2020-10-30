#include "calnum.h"
#include <stdio.h>

double calnum(double (*f)(double), double a, double b, int n)
{
    double P = 0;
    double h;
    double dx = (b - a) / n;
    double x = a;

    for (; x < b; x += dx)
        P += 1. / 6. * dx * (f(x) + 4 * f(x + (dx / 2)) + f(x + dx));

    return P;
}
