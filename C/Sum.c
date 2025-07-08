#include<stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the number=");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        sum+=i;
        ++i;   
    }   
    printf("Sum of numbers=%d\n",sum);
    return 0;
}