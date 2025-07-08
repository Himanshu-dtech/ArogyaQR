#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the no. of rows=");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            printf(" >-<  ");
        }
        printf("\n");
    }
    return 0;
}