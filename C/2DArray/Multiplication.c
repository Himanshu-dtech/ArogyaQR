#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the no. of rows=");
    scanf("%d",&m);
    printf("Enter the no. of columns=");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter the Matrix a=\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int p,q;
    printf("Enter the no. of rows=");
    scanf("%d",&p);
    printf("Enter the no. of columns=");
    scanf("%d",&q);
    int b[p][q];
    printf("Enter the Matrix b=\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int res[m][q];
    if(n!=p)
    {
        printf("Matrix Multiplication is not possible !");
    }
    else{ 
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++)
            {
                res[i][j]=0;
                for(int k=0;k<n;k++)
                {
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
    }
    for(int i=0;i<m;i++){
            for(int j=0;j<q;j++)
            {

                printf("| %d |",res[i][j]);
            }
            printf("\n");
    }
    return 0;

}