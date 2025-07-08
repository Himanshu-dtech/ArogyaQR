#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value of x=");
    scanf("%d",&x);
    printf("Enter value of y=");
    scanf("%d",&y);
    (x>y)?(printf("%d is greater than %d",x,y)):(printf("%d is greater than %d",y,x));
    return 0;   
}