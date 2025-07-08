#include<stdio.h>
int main()
{
    int n;
    printf("Enter the integer=");
    scanf("%d",&n);
    (n<0)?printf("Absolute value=%d",-1*n):printf("Absolute Value=%d",n);
    return 0;
}