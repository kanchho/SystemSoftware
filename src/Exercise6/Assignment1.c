/*
 =================================================================================================
 Name        : Assignment1.c
 Author      : Bibek Koirala
 Description : Finding largest prime factors of given number of random numbers through command line
 ==================================================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Array.h"

int main(int argc, char *argv[]){

  if (argc == 2){                                             // 2 because one arg is filename and another is required for length of array.
                       
     int n = 0;

     while(1){

         if(*(*(argv+1)+n) >= 48 && *(*(argv+1)+n) <= 57){    //Executes block if every single char of 2nd arg is digit.
            n++;

            if(*(*(argv+1)+n) == '\0'){
                break;
            }
         }

         else{                                                 // Exits program if every single char of 2nd arg is not digit.
            printf("Please input only digits.\n");
            return 0;
         }
     }

   char tempLength[10] = "";
   strcpy(tempLength, *(argv+1));
   char* tempPtr;
   int lengthOfArray = strtol(tempLength, &tempPtr, 10);

   long* ptrRandNumsArray = createArray(lengthOfArray);
   long* ptrLargestPrimeFactors = primeFactorFinder(lengthOfArray, ptrRandNumsArray);
   printLargestPrimeFactors(lengthOfArray, ptrRandNumsArray, ptrLargestPrimeFactors);

   return 0;
 } 

  else {
     printf("Error. Please provide only one number\n");           // If number of command line arguments is not exactly 2, prints error message and exits program
     return 0;
  }
}
