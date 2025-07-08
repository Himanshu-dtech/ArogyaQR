#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number=");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d is an even number",x);
    }
    if(x%2!=0)
    {
        printf("%d is a odd number",x);
    }
    return 0;
}