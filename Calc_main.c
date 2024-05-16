#include <stdio.h>
#include "Calc.h"

int main()
{
    float aValue = 0;
    float bValue = 0;
    float cValue = 0;
    int res = quadraticInputIdentifier(&aValue, &bValue, &cValue);
    if (res != 0) {
        printf("Error\n");
        return 1;
    }
    res = quadraticCalculator(aValue, bValue, cValue);
    if (res != 0) {
        printf("Error\n");
        return 1;
    }
    return 0;
}