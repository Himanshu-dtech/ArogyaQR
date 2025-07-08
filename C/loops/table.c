#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter the no.=");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        x=n*i;
        printf("%d\n",x);
    }
    return 0;
}