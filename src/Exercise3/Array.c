/*
 ============================================================================
 Name        : Array.c
 Author      : Bibek Koirala
 Description : Returns sum of all elements of the array.
 ============================================================================
 */

#include "Array.h"

int sumOfElements (int* ptrToArray, int sizeOfArray)
{
   int i, sum = 0;   
   for (i = 0; i < sizeOfArray; i++ )
   {
     sum += *(ptrToArray + i);
   }
    return sum;
}