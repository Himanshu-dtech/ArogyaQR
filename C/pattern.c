#include<stdio.h>
int main()
{
    int x,i,j,k;
    printf("Enter the number of rows=");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("  ");
        }
         
        for(j=1;j<=x+1-i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
}