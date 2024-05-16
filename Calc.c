#include <stdio.h>
#include <math.h>
#include "Calc.h"

int quadraticCalculator(float a, float b, float c)
{
   float result = 0; // Creating result variable in float state for later use
   float zero = 0; // Creating zero variable for comparing to other floats in if statements

   float Check = (b*b) - (4*a*c);

   printf("This is your # %f", Check);

   printf("\n"); // Line break

   // If answer is under bellow zero there are no roots
   // If answer is equal to zero there is one root
   // If answer is over zero there are two unique roots

   if (Check < zero){
      printf("Your quadratic equation has no real roots\n");
      return 1;
    }

   float QuadraticPos = (-b+sqrt(Check))/(2*a); // Calculation for the positive root of a quadratic

   float QuadraticNeg = (-b-sqrt(Check))/(2*a); // Calculation for the negative root of a quadratic

   if (Check == zero){
      printf("Your quadratic equation has one real root at %f\n", QuadraticPos);
   }
   else if (Check > zero){
      printf("Your quadratic equation has two real roots");
      
      printf("\n"); // Line break

      printf("1) %f", QuadraticPos);
      
      printf("\n"); // Line break

      printf("2) %f", QuadraticNeg);

      printf("\n"); // Line break
    }

   return 0;
}

