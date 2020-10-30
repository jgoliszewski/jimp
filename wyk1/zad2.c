#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 3){
        int a = atoi( argv[1] );
        int b = atoi( argv[2] );
        printf( "%d - %d = %d\n", a, b, a - b );
    

    }else{
        return 1;
    }
}




