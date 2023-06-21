/* Prints int and float values in various formats */

#include <stdio.h> //This includes the input-output library in the program

int main(void) //This is the main function
{
    int i; //This declares the variable i as an integer
    float x; //This declares the variable x as a float

    i = 40; //This assigns 40 to variable i
    x = 839.21f; //This assigns 839.21 to variable x

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); //This prints the integer i in various formats
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x); //This prints the integer x in various formats

    return 0; //Makes sure the function doesn't return any value and makes sure the function works properly.
}