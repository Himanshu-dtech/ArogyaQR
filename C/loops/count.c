#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number=");
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        count++;
    }
    printf("No. of digits=%d",count);
    return 0;
}