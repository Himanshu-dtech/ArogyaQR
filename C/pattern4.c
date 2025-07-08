#include<stdio.h>
int main()
{
    int rows,i,j,k;
    printf("Enter the no. of rows=");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows+1-i;j++)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }    
    return 0;
}