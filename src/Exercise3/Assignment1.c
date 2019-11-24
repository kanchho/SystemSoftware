/*
 ============================================================================
 Name        : Assignment1.c
 Author      : Bibek Koirala
 Description : Practicing the use of multiple files & creating test bench
 ============================================================================
 */

#include <stdio.h>
#include "Prime.h"
#include "Tetranacci.h"
#include "Array.h"

#define SIZE 16

int main() {

    int testArray[SIZE] = {-4, -1, 0, 1, 2, 3,
                      5, 11, 29, 107, 108, 109,
                     997, 147312, 547337, 600000};
       
    printf("Sum of elements is %d\n\n", sumOfElements(testArray, SIZE));


    for (int i = 0; i < SIZE; i++)
    {
       if (isTetranacci(testArray[i])==1 && isPrime(testArray[i])== 0)
       {
       printf("Number %d is Tetranacci but not prime\n", testArray[i]);
       }
   
   }

 printf("\n\n");

   for (int i = 0; i < SIZE; i++)
    {
       if (isTetranacci(testArray[i])== 0 && isPrime(testArray[i])== 1)
       {
       printf("Number %d is prime but not Tetranacci\n", testArray[i]);
       }


   }

  printf("\n\n");

   for (int i = 0; i < SIZE; i++)
    {
       if (isTetranacci(testArray[i])== 1 && isPrime(testArray[i])== 1)
       {
       printf("Number %d is prime and Tetranacci\n", testArray[i]);
       }
   }
  
  printf("\n\n");

   return 0;
}