#include<stdio.h>
int main()
{
    int yr;
    printf("Enter the year=");
    scanf("%d",&yr);
    if(yr%400==0)
    {
        printf("%d is leap year",yr);
    }
    else if(yr%100==0)
    {
        printf("%d isn't a leap year",yr);
    }
    else if(yr%4==0)
    {
        printf("%d is a leap year",yr);
    }
    else
    {
        printf("%d isn't a leap year",yr);
    }
    return 0;
}