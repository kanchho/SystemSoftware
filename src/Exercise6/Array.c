/*
 ======================================================================================
 Name        : Array.c
 Author      : Bibek Koirala
 Description : Populating array with random numbers and printing L.P.F of each number
 ======================================================================================
 */

// L.P.F = Largest Prime Factor

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include "Array.h"

#define LIMITS 12

long* createArray(int size){
    long* ptrRandNumsArray = (long*) malloc(size * sizeof(long));

    srand(time(NULL));
    for (int i = 0; i < size; i++){
          *(ptrRandNumsArray+i) = rand()% LIMITS;
    } 
    
    return ptrRandNumsArray;

}

long* primeFactorFinder(int size, long* ptrRandNums){
   long* ptrLargestPrimeFactors = (long*) malloc(size * sizeof(long)); 
   long i, j, k, l, m = 0;
   long* ptrFlags = (long*) malloc(LIMITS * sizeof(long));
     
   for(i = 0; i < size; i++){
        long numToOperate = *(ptrRandNums+i);
        for(j = 0; j<= numToOperate; j++){
            *(ptrFlags+j) = 1;                    //Assuming every number upto numToOperate to be prime. Flag of 1 = prime
        }

        *ptrFlags = 0;
        *(ptrFlags + 1 ) = 0;
        

        for(k = 2; k <= sqrt(numToOperate); k++){
             for(l = k*k; l <= numToOperate; l+=k){                       
                  *(ptrFlags+l)= 0;                      // Setting flag of composite numbers upto numToOperate to 0.
             }
         }
         
         for(m = numToOperate; m >= 0; m--){
             if(*(ptrFlags + m ) == 1){
                 if(numToOperate % m == 0){
                      *(ptrLargestPrimeFactors+i) = m;
                      break;
                 }
             }
             
        }
         
   
   }

   return ptrLargestPrimeFactors;


}

void printLargestPrimeFactors(int size, long* ptrRandNumsArray, long* ptrLargestPrimeFactors){
   int i;
   for(i = 0; i < size; i++){

       if ((*(ptrRandNumsArray + i) == 0)||(*(ptrRandNumsArray + i) == 1)) {
              printf("%ld has no prime factors\n", *(ptrRandNumsArray + i) );
       } 
        
       else{
              printf("Largest prime factor of %ld is %ld \n", *(ptrRandNumsArray + i), *(ptrLargestPrimeFactors + i) );
       }
  }

   free(ptrRandNumsArray);
   free(ptrLargestPrimeFactors);
}







