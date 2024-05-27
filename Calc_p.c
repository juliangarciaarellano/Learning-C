#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Calc.h"

char functionSelector(char Selection)
{
   char functionCode;


   printf("Welcome! \n");
   printf("Here are the currently supported equation types: \n");
   printf("L - linear function (ax+b) \n"); // Linear function
   printf("Q - quadratic function (ax^2+bx+c) \n"); // Quadratic function


   printf("Enter the code for the function you wish to solve for: ");
   scanf(" %c", &functionCode);

   return functionCode;
}


// Input function for linear

int linearInputIdentifier(float *paValue, float *pbValue)
{
   int res = 0;

   // Check input parameters are as expected
   assert(paValue != NULL);
   assert(pbValue != NULL);

   // Print the form for a linear formula in order to ensure values are entered correctly //
   printf("Functions take the form: ax+b");

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

   return 0;
}


// Input function for quadratics

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