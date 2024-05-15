#include <stdio.h>
#include "Calc.h"

#define TEST_SUCCESS 1
#define TEST_FAILURE 0

int testQ1() 
{
    double result = quadraticCalculator(3.5, 0, 0);
    if (result != 25) {
        return TEST_FAILURE;
    }
    return TEST_SUCCESS;
}

int main()
{

    if (testQ1() != TEST_SUCCESS) {
        printf("testQ1: Failed\n");
    }
    
    return 0;
}