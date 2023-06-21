/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h> //Implements the string library in the program

#define MAX_REMIND 50 /* maximum number of reminders */
#define MSG_LEN 60 /* max length of reminder messages */

int read_line(char str[], int n);

int main(void)
{
    char reminders[MAX_REMIND][MSG_LEN+3]; //Declares an array that will store the reminders
    char day_str[3], msg_str[MSG_LEN+1]; //Declares strings with an array that will store the day and message of the reminder
    int day, i, j, num_remind = 0;

    for(;;){
        if(num_remind == MAX_REMIND){ //This determines if the number of reminders reaches or exceeds the maximum amount
            printf("--No space left--\n"); //This message will appear if the number of reminders reaches maximum
            break;
        }
    }

    printf("Enter day and reminder: ");
    scanf("%2d", &day);
    if(day == 0)
        break;
    sprintf(day_str, "%2d", day); //This converts day into a string
    read_line(msg_str, MSG_LEN); //This will read the message of the reminder

    for(i = 0; i < num_remind; i++) //This determines which correct reminder to put on which day
        if(strcmp(day_str, reminders[i]) < 0) 
        break;
    for(j = num_remind; j > 1; j--) //If new reminder appears, a space in the array will be created
        strcpy(reminders[j], reminders[j-1]); 

    strcpy(reminders[i], day_str);
    strcat(reminders[i], msg_str);

    num_remind++; //Iterates the number of reminders

    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++)
        printf(" %s\n", reminders[i]); //Prints the list

    return 0;
}

int read_line(char str[], int n)
{
    int ch, i = 0;

    while((ch = getchar()) != '\n') //This will read each character until \n appears or if n is greater than i
        if (i < n)
            str[i++] = ch;
        str[i] = '\0';
        return i;
}