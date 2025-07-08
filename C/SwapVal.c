#include<stdio.h>
int main()
{
    int a,b,k;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    k=a+b;
    a=k-a;
    b=k-b;
    printf("After swapping value of a=%d\n",a);
    printf("Aftre swapping value of b=%d\n",b);
    return 0;
}