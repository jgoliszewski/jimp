/** Program testujacy dla funkcji calkujacej met. trapezow
 *     jstar@iem.pw.edu.pl 15.02.2003-10.01.2010
 *     */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "calnum.h" /* naglowek funkcji calkujacej */

double f(double x)
{ /* przykladowa funkcja testowa */
        return x * sin(x);
        //return -(x-2)*(x-5);
}

int main(int argc, char **argv)
{
        double a = argc > 1 ? atof(argv[1]) : 0;    /* pocz. przedzialu
                                                                 * calkowania */
        double b = argc > 2 ? atof(argv[2]) : M_PI; /* koniec przedzialu
                                                                 * calkowania, M_PI jest
                                                                 * zdef. w math.h */
        int n = argc > 3 ? atoi(argv[3]) : 1000;    /* liczba krokow
                                                                 * calkowania */

        printf("Int <%g, %g>[%i] ( x*sin(x) ) = %g\n", a, b, n, calnum(f, a, b, n));

        return 0;
}
