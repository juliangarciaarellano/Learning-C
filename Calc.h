
#ifndef CALC_H
#define CALC_H


/*
 quadraticInputIdentifier

 Asks for inputs for use in the quadraticCalculator function later on
 saves them as aValue, bValue, and cValue
 
 Parameters:
   paValue: pointer to float: OUT: first coefficient read
   pbValue: pointer to float: OUT: second coefficient read
   pcValue: pointer to float: OUT: third coefficient read

 Return:
   0 success
   >0 fail
*/
int quadraticInputIdentifier(float *paValue, float *pbValue, float *pcValue);

/*
 quadraticCalculator

 Computes the roots of the quadratic equation
 Identifies either 0, 1, or 2 unique roots
 
 Parameters:
   first: float: first coefficient
   second: float: second coefficient
   third: float: third coefficient

 Return:
   0 success
   >0 fail
*/
int quadraticCalculator(float first, float second, float third);





#endif
