#include<stdio.h> //general c library
#include<math.h> //allows for powers

int main(){

    // %d allows for printing of an integer value - 
    printf("%d", 3+3);

    printf("\n"); // leaves a break


    // Calling on a variable 
    int value = 3+3+3; // Iddentifying varibale as an integer
    printf("%d", value);

    printf("\n"); // leaves a break

    // Inserting variables into an equation

    int n = 5;


    printf ("%d", (int) pow (n, 2));

}