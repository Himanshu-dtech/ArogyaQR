#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the no. of rows=");
    scanf("%d",&r);
    printf("Enter the no. of columns=");
    scanf("%d",&c);
    int a[r][c],b[r][c],x[r][c];
    printf("Enter the inputs of matrix a:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }    
    printf("Enter the inputs of matrix b:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            x[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Sum of matrix a and b is=\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("| %d |",x[i][j]);
        }
        printf("\n");
    }  
    
    return 0;          
}    