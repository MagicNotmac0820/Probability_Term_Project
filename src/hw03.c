#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <math.h>
#define SAMPLE_NUM 1000000007
// #define SAMPLE_NUM 1000000
#define ADDEND (-log(1.0-rand()/(RAND_MAX+1.0)))
#define TIME_UPPERBOUND 7.5

int main(void){
    int result[21] = {0} ;
    int64_t totalCount = 0 ;
    srand(time(NULL)) ;

    for( int i = 1 ; i <= SAMPLE_NUM ; ++i ){
        int32_t count = -1 ;
        double sum = 0 ;

        do{
            sum += ADDEND ;
            ++count ;
        }while( sum <= TIME_UPPERBOUND ) ;

        if( count >= 0 && count < 21 )
            result[count]++ ;
        totalCount += count ;
    }

    printf("The distribution: \n") ;
    for( int i = 0 ; i < 21 ; ++i )
        printf("P_X(%d) = %d\n", i , result[i] ) ;

    printf("The expected value: %f\n", (double)totalCount / (double)SAMPLE_NUM ) ;

    return EXIT_SUCCESS ;
}