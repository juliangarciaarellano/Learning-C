
#ifndef CALC_H
#define CALC_H

/*
 functionSelector

 Takes a user input which allows for user to search for their desired function
 
 Parameters:
   Selection: Allows for idenitfying which function a user wants based on given input parameters

 Return:
   l linear
   q quadratic
   Anything else == fail
*/
 char functionSelector(char Selection);





/*
 linearInputIdentifier

 Asks for inputs for use in the linearCalculator function later on
 saves them as aValue, and bValue
 
 Parameters:
   paValue: pointer to float: OUT: first coefficient read
   pbValue: pointer to float: OUT: second coefficient read

 Return:
   0 success
   >0 fail
*/
int linearInputIdentifier(float *paValue, float *pbValue);

/*
 linearCalculator

 Computes the root of the linear equation (ax+b)
 
 Parameters:
   first: float: first coefficient
   second: float: second coefficient

 Return:
   0 success
   >0 fail
*/
int linearCalculator(float first, float second);




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

 Computes the roots of the quadratic equation (ax^2+bx+c)
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






/*
 cubicInputIdentifier

 Asks for inputs for use in the cubicCalculator function later on
 saves them as aValue, bValue, cValue, and dValue
 
 Parameters:
   paValue: pointer to float: OUT: first coefficient read
   pbValue: pointer to float: OUT: second coefficient read
   pcValue: pointer to float: OUT: third coefficient read
   pcValue: pointer to float: OUT: fourth coefficient read

 Return:
   0 success
   >0 fail
*/
int cubicInputIdentifier(float *paValue, float *pbValue, float *pcValue, float *pdValue);

/*
 cubicCalculator

 Computes the roots of the cubic equation (ax^3+bx^2+cx+d)
 Identifies either 0, 1, 2, or 3 unique roots
 
 Parameters:
   first: float: first coefficient
   second: float: second coefficient
   third: float: third coefficient
   fourth: float: fourth coefficient

 Return:
   0 success
   >0 fail
*/
int cubicCalculator(float first, float second, float third, float fourth);

#endif
