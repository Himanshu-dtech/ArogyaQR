#include<stdio.h>  

int main()      
{
    int digit,sum=0, n; 

    printf("The armstrong numbers are-");

    for(n = 1; n <= 10000; n++)
    { 
        int x = n; 
        sum = 0;                
        while(x > 0) 
        {
            digit = x % 10; 
            sum = sum + (digit * digit * digit); 
            x = x / 10;
        }

        if(sum == n)        
            printf("%d\n ",n); 
    } 

    return 0;
}