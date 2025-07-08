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
    int rows,i,j;
    printf("Enter the no. of rows=");
    scanf("%d",&rows);
    for(i=0;i<=rows;i++)
    {
        for(int k=1;k<=rows+1-i;k++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            int nCr=factorial(i)/(factorial(j)*factorial(i-j));
            printf("%d   ",nCr);
        }
        printf("\n");
    }
    return 0;
}