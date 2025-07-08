#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the number of rows=");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows+1-i;j++)   //if i=1,j=5,rows=6 then, i+j=rows+1 i.e., j=rows+1-i
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}