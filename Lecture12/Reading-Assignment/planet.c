/* Checks planet names */

#include <stdio.h>
#include <string.h> //Implements the string library in the program

#define NUM_PLANETS 9 //Maximum number of planets

int main(int argc, char *argv[]) //argc determines the number of arguments that were given, argv determines a list of command line arguments
{
    char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"}; //Declares an array containing planets

    int i, j;

    for(i = 1; i < argc; i++){ //This compares command-line arguments to the planet names in the *planets array
        for(j = 0; j < NUM_PLANETS; j++)
            if(strcmp(argv[i], planets[j]) == 0){ //
                printf("%s is planet %d\n", argv[i], j+1);
                break; //Breaks if the command-line argument and planet array matches
            }
        if(j == NUM_PLANETS) //This will print out that string is not a planet if the command-line argument and planet array is not a match
            printf("%s is not a planet\n", argv[i]);
    }
    return 0; //Makes sure the function doesn't return any value and makes sure the function works properly.
}