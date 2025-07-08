#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    printf("Enter the value of c=");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest number",a);
    }
    if(b>c && b>a)
    {
        printf("%d is the greatest number",b);
    }
    if(c>a && c>b)
    {
        printf("%d is the greatest number",c);
    }
    return 0;
}