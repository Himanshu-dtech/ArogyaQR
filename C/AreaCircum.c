#include<stdio.h>
int main()
{
    float r,area,circum;
    printf("Enter the radius of the circle=");
    scanf("%f",&r);
    area=3.14*r*r;
    circum=2*3.14*r;
    printf("Area of circle=%f\n",area);
    printf("Circumference of circle=%f\n",circum);
    return 0;
}