#include <stdio.h>
#include <ctype.h> 
#include <stdbool.h>

void scan_word(int*occurences); //function prototypes
bool is_anagram(int*occurences1, int*occurences2);

int main(void){ //main function
    
    int occurences1[26] = {0};
    int occurences2[26] = {0};
    
    //asks for user input 
    
    printf("Enter first word: "); 
    scan_word(occurences1);
    
    printf("Enter second word: ");
    scan_word(occurences2);
    
    if(is_anagram(occurences1, occurences2)){ //checks if function returns true
        printf("The words are anagrams. \n");
        return 0;
    }
    
    printf("The words are not anagrams. \n"); //if function returns false
    return 0;
    
}

void scan_word(int*occurences){ //function to determine the count of the word in user input
    
    char c;
    
    while((c = getchar()) != '\n'){
        if(isalpha(c)){
            occurences[toupper(c) - 'A']++;
        }
    }
}

bool is_anagram(int*occurences1, int*occurences2){ //function to determine if both words are anagrams
    
    int i;
    
    for(i = 0; i < 26; i++){
        if(occurences1[i] != occurences2[i]){ //if counts match, declare false
            return false;
            break;
        }
    }
    
    return true; //otherwise, false
}