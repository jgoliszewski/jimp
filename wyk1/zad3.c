#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc == 3){
        int a = atoi( argv[1] );
        int b = atoi( argv[2] );
        int i;
        for( i = a; i <= b; i++){
            printf( "%d\n", i );
        }

    }else{
        return 1;
    }
}




