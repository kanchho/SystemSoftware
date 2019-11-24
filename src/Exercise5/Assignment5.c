/*
 ============================================================================
 Name        : Assignment5.c
 Author      : Bibek Koirala
 Description : Stripping binary numbers from string and performing operations.
 ============================================================================
 */



#include <stdio.h>               
#include <stdlib.h>
#include <string.h>           
#include "Conversion.h"



int main(int argc, char *argv[]){    // *argv[] is same as **argv. 
  char tempArray[34] = "";
  int i, j = 0;
  if (argc < 2){
      printf("Error. Please enter command line arguments after executable name.\n");
  }

  for (i = 1; i < argc; i++){
      int n= 0;
      while (1){
         if(*(*(argv+i)+n) == '0'|| *(*(argv+i)+n) == '1'){   // *(argv +i) is same as argv[i] which derefernces to only base address of each string  with increase in value of i.
             tempArray[j] = *(*(argv+i)+n);                   // So, n is used to access each element of each string for parsing 1's and 0's.
             j++;
         }

         n++;
         
         if(*(*(argv+i)+n) == '\0'){
             break;
         }
      }
  }
 
  char binArray[10];

  if (strlen(tempArray) == 0){        // If text with no 0's or 1's is passed, binary number is assumed to be 0 by default.
      strcpy(binArray, "0");  
      binFunction(binArray);
  }

  else if (strlen(tempArray) == 8){
       strcpy(binArray, tempArray);
       binFunction(binArray);
  }

  else {
     char *tempPtr = tempArray;
     while (strlen(tempPtr) >= 8){             // = sign in >= is used for second pass. Suppose, 16 bits passed, second pass will have exactly 8 bits remaining. So, = is used.
         strncpy(binArray, tempPtr, 8);
         binFunction(binArray);
         tempPtr = tempPtr + 8;
     }
  }

  return 0;
}
