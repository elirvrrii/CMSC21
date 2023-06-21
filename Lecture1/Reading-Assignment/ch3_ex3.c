/* Adds two fractions*/

#include <stdio.h> //This includes the input-output library in the program

int main(void) //This is the main function
{
    int num1, denom1, num2, denom2, result_num, result_denom; //This declares the variables as an integer

    printf("Enter first fraction: "); //This asks for a user to enter the first fraction
    scanf("%d/%d", &num1, &denom1); //This reads the first numerator and denominator

    printf("Enter second fraction: "); //This asks for a user to enter the second fraction
    scanf("%d/%d", &num2, &denom2); //This reads the second numerator and denominator

    result_num = num1 * denom2 + num2 * denom1; //This declares a variable that determines the resulting numerator by adding the product of num1 denom2 and num2 denom1
    result_denom = denom1 * denom2; //This declares a variable that determines the resulting denominator by multiplying the first and second denominator
    printf("The sum is %d/%d\n", result_num, result_denom); //This prints the resulting fraction

    return 0; //Makes sure the function doesn't return any value and makes sure the function works properly.
}