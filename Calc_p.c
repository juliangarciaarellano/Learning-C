#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Calc.h"

int quadraticInputIdentifier(float *paValue, float *pbValue, float *pcValue)
{
   int res = 0;

   // Check input parameters are as expected
   assert(paValue != NULL);
   assert(pbValue != NULL);
   assert(pcValue != NULL);

   // Print the form for a quadratic formula in order to ensure values are entered correctly //
   printf("Functions take the form: ax^2+bx+c");

   printf("\n"); // Line break

   // Request and store "a" value
   printf("Enter your 'a' value: "); 

   res = scanf("%4f", paValue);
   if (res != 1) {
    return 1;
   }

   // Request and store "b" value
   printf("Enter your 'b' value: "); 

   res = scanf("%4f", pbValue);
   if (res != 1) {
    return 1;
   }

   // Request and store "c" value
   printf("Enter your 'c' value: "); 

   res = scanf("%4f", pcValue);
   if (res != 1) {
    return 1;
   }

   return 0;
}