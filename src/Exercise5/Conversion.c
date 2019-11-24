/*
 ============================================================================
 Name        : Conversion.c
 Author      : Bibek Koirala
 Description : Converting the stripped binary numbers to decimal and hexadecimal.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "Conversion.h"

int hexlength;                                // Later used for printing hexadecimal values stored in array.

void binFunction(char* ptrToArr){
    long binNum = strtol(ptrToArr, &ptrToArr, 10);
    long decNum = convertBinaryToDecimal(binNum);
    int * hexNum = convertBinaryToHexa(decNum);
    printFunc(binNum, decNum, hexNum);
    free(hexNum);
}

long convertBinaryToDecimal(long bin)
{
    long dec, rem = 0;                       //If user enters zero 0's or 1's, decimal value will be 0.
    int i = 0;
    while (bin != 0){   
        rem = bin % 10;
        dec = dec + rem*pow(2,i);
        ++i;
        bin = bin / 10;
    }
    return dec;
}

int * convertBinaryToHexa(long dec){
   int i = 0;
   int* hex = malloc(20 * sizeof(int));
   hex[i] = 0;                               //If user enters zero 0's or 1's, hexadecimal value will be 0.
   while(dec!=0){
       hex[i] = dec % 16;
       dec = dec/16;
       i++;
   }

   hexlength = i;                           // Number of hexadecimal numbers in an array equals number of iterations. Used in printFunc.
   return hex;
}


void printFunc(long bin, long dec, int* hex){
   int j; 
   printf("Binary : %ld\n", bin);
   printf("Decimal : %ld\n", dec);
   printf("Hexadecimal : ");
   for(j = hexlength - 1; j >= 0; j--){
        if(hex[j]>9){
            printf("%c",hex[j]+55);
        }

        else {
            printf("%d",hex[j]);
        }
   }
  printf("\n\n");
}

