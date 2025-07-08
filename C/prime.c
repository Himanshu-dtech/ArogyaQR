#include<stdio.h>
int main()
{
    int x,i,count;
    printf("Enter the number=");
    scanf("%d",&x);
    if(x==0 || x==1)
    {
        count=1;
    }
    for(i=2;i<=x/2;++i)
    {
       if(x%i==0)
       {
        count=1;
        break;
       }
    }
    if(count==0)
    {
        printf("%d is a prime number",x);
    }
    else
    {
        printf("%d isn't a prime number",x);
    }
    return 0;
}