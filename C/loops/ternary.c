#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a=");
    scanf("%d",&a);
    printf("Enter the value of b=");
    scanf("%d",&b);
    (a%b<0)?(printf("%d",-1*(a%b))):(printf("%d",2*(a%b)));
    return 0;

}