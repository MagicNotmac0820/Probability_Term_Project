#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <math.h>
#define SAMPLE_NUM 1000000007

int main(void){
    int64_t result = 0 ;
    srand(time(NULL)) ;
    
    for( int i = 1 ; i <= SAMPLE_NUM ; ++i ){
        int64_t counts = 0 ;
        int cards[6] = {0} ;

        do{
            cards[rand()%6]++ ;
            counts++ ;
        }while( !cards[0] || !cards[1] || !cards[2] || !cards[3] || !cards[4] || !cards[5] ) ;

        result += counts ;
    }

    printf("The expectation counts: %f\n", (double)result / (double)SAMPLE_NUM ) ;
    return EXIT_SUCCESS ;
}