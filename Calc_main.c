#include <stdio.h>
#include "Calc.h"

int main()
{

    char Selection;
    float aValue = 0;
    float bValue = 0;
    float cValue = 0;

    char functionCode = functionSelector(Selection);


    if (functionCode == 'L' || functionCode == 'l'){
        int reslinear = linearInputIdentifier(&aValue, &bValue);
        if (reslinear != 0) {
            printf("Error\n");
            return 1;
        }
        reslinear = linearCalculator(aValue, bValue);
        if (reslinear != 0) {
            printf("Error\n");
            return 1;
        }
    }
    if (functionCode == 'Q' || functionCode == 'q'){
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
    }
    if (functionCode != 'L' && functionCode != 'l' && functionCode != 'Q' && functionCode != 'q'){
        printf ("Not a valid input");
        return 1;
    }
    return 0;
}