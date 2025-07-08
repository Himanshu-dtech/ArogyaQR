#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
        {
            fact=fact*i;
        }
    return fact;
}
int main()
{
int ncr=factorial(10);
printf("Factorial of 10=%d",ncr);
return 0;
}