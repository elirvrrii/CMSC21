 #include<stdio.h>
 int main()
 {
     int b = 2, n = 0;
     long int p=1;
     
     printf("n            2 to the n\n");
     printf("-------------------------\n");

     while(n < 11)
     {
        if (n == 0)
            p = 1;
            
        else
         p *= b;
         printf("%d                 %ld\n", n, p);
         ++n;
     }

     

     return 0;
 }