#include <stdio.h>
int main(void)
{
    int ndays, start, i;
    
    printf("Enter number of days in a month: ");
    scanf("%d", &ndays);
    
    if(ndays != 28 && ndays!= 29 && ndays != 30 && ndays != 31)
    printf("Invalid number. Type a valid number of days.");
    
    else
    {
    
    printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &start);
    
        if(start <= 0 || start >= 8)
        printf("Invalid number. Type a starting day.");
    
        else
        {
              for(i = 1; i < start; i++)
            printf("   ");
            
            for(i = 1; i <= ndays; i++)
            {
                printf("%3d", i);
                if((start + i - 1)%7 == 0)
                printf("\n");
            }     
        }
        
    }
    
    return 0;
}