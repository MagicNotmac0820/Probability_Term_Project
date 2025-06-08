#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include <time.h>
#define SAMPLE_NUM 1000000007
#define ADDEND ( rand() / (RAND_MAX/8.0) - 4.0 )

int main(void){
    double fy[71] = {0.0} ;
    srand(time(NULL)) ;

    for( int i = 1 ; i <= SAMPLE_NUM ; ++i ){
        double y = 0 ;
        for( int j = 0 ; j < 11 ; ++j )
            y += ADDEND ;

        if( y >= -35.5 && y <= 35.5 )
            fy[(int)(y+35.5)]++ ;
    }

    for( int i = 0 ; i < 71 ; ++i )
        printf("%lf ", fy[i] / (double)SAMPLE_NUM ) ;
    printf("\n") ;

    return EXIT_SUCCESS ;
}