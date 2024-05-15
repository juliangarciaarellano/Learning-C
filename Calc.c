#include <stdio.h>
#include <math.h>
#include "Calc.h"

float quadraticCalculator(float a, float b, float c)
{
   float result = 0; // Creating result variable in float state for later use
   float zero = 0; // Creating zero variable for comparing to other floats in if statements
   float aValue = 0; //
   float bValue = 0; // Creating a, b, and c values as floats
   float cValue = 0; //

   // Print the form for a quadratic formula in order to ensure values are entered correctly //
   printf("Functions take the form: ax^2+bx+c");

   printf("\n"); // Line break

   // Request and store "a" value
   printf("Enter your 'a' value: "); 

   scanf("%4f", &aValue);

   // Request and store "b" value
   printf("Enter your 'b' value: "); 

   scanf("%4f", &bValue);

   // Request and store "c" value
   printf("Enter your 'c' value: "); 

   scanf("%4f", &cValue);

   // Check # of roots using b^2-4ac
   // Create a float which stores the checking algorithm

   float Check = (bValue*bValue) -(4*aValue*cValue);

   printf("This is your # %f", Check);

   printf("\n"); // Line break

   // If answer is under bellow zero there are no roots
   // If answer is equal to zero there is one root
   // If answer is over zero there are two unique roots


   if (Check < zero){
      printf("Your quadratic equation has no real roots");

      return 0;
    }

   float QuadraticPos = (-bValue+sqrt(Check))/(2*aValue); // Calculation for the positive root of a quadratic

   float QuadraticNeg = (-bValue-sqrt(Check))/(2*aValue); // Calculation for the negative root of a quadratic

   if (Check == zero){
      printf("Your quadratic equation has one real root at %f", QuadraticPos);

      return 0;
    }
   
   if (Check > zero){
      printf("Your quadratic equation has two real roots");
      
      printf("\n"); // Line break

      printf("1) %f", QuadraticPos);
      
      printf("\n"); // Line break

      printf("2) %f", QuadraticNeg);

      printf("\n"); // Line break

      return 0;
    }

   return 0;
}

