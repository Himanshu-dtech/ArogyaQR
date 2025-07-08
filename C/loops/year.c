#include<stdio.h>
int main()
{
    int yr;
    printf("Enter the year=");
    scanf("%d",&yr);
    (yr%4==0)?(yr%100!=0?printf("%d is a leap year",yr):(yr%400==0?printf("%d is a leap year",yr):printf("%d isn't a leap year",yr))):printf("%d isn't a leap year",yr);
    return 0;
}