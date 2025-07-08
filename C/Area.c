#include<stdio.h>
int main()
{
    double r;
    double pi=3.14;
    printf("Enter the radius=");
    scanf("%lf",&r);
    double area=pi*r*r;
    printf("Area of circle= %.2f",area);
    return(0);
}