#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <math.h>
#define SAMPLE_NUM 1000000007

int main(void){
    int64_t result1 = 0 ;
    int64_t result2 = 0 ;
    int64_t result3 = 0 ;
    srand(time(NULL)) ;

    for( int i = 1 ; i <= SAMPLE_NUM ; ++i ){
        int coin[2] = {0} ;
        int64_t count = 0 ;

        //p=0.4
        do{
            int index = (rand()%10)/4 ;
            coin[index>=1]++ ;
            count++ ;
        }while( coin[0] < 2 || coin[1] < 3 ) ;
        result1 += count ;
        memset( coin , 0 , 2 * sizeof(int) ) ;
        count = 0 ;

        //p=0.4325603
        do{
            int index = (rand()%10000000)/4325603 ;
            coin[index>=1]++ ;
            count++ ;
        }while( coin[0] < 2 || coin[1] < 3 ) ;
        result2 += count ;
        memset( coin , 0 , 2 * sizeof(int) ) ;
        count = 0 ;

        //p=0.45
        do{
            int index = (rand()%100)/45 ;
            coin[index>=1]++ ;
            count++ ;
        }while( coin[0] < 2 || coin[1] < 3 ) ;
        result3 += count ;
        memset( coin , 0 , 2 * sizeof(int) ) ;
        count = 0 ;
    }

    printf("The expectation with p=0.4: %20f\n", (double)result1 / (double)SAMPLE_NUM ) ;
    printf("The expectation with p=0.4325603: %14f\n", (double)result2 / (double)SAMPLE_NUM ) ;
    printf("The expectation with p=0.45: %19f\n", (double)result3 / (double)SAMPLE_NUM ) ;
    return EXIT_SUCCESS ;
}