#include <stdio.h>
#include <math.h>

double v_std_dev( double v[], int n ){
    double sum, sum2;
    for( int i= 0; i < n; i++ ){
        sum += v[i];
        sum2 += v[i] * v[i];
    }
    return sqrt( n * sum2 - sum * sum) / n;
}
void print_v( double v[], int n ){
    printf( "[ " );
    for( int i= 0; i < n; i++ )
        printf( "%g ", v[i] );
    printf( "]\n" );
}
int
main(int argc, char *argv[])
{
        FILE           *in = argc > 1 ? fopen(argv[1], "r") : stdin;
        double v[1000];

        if (in != NULL) {
                double      x;
                int         n;

                while (fscanf(in, "%lf", &x) == 1) {
                        v[n] = x;
                        n++;
                }
                fclose(in);
                //print_v( v, n );
                printf("std_dev= %g\n", v_std_dev( v, n ) );

                return 0;
        } else
                return 1;
}
