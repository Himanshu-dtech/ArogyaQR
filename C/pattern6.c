#include<stdio.h>
int main()
{
    int rows,i,j;
    printf("Enter the no. of rows=");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                int d=j+64;
                char ch=(char)d;
                printf("%c ",ch);
            }
            else
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    return 0;
}