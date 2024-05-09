#include <stdio.h>

int main(){
    // Create an integer variable that will store the number we get from the user
    int myNum = 0;

    // Ask the user to type a number
    printf("Type a number and press enter: \n"); 

    // Saves users entered number into created myNum
    scanf("%d", &myNum);

    // Prints users number back to them
    printf("Your number is: %d", myNum);


    return 0;
}