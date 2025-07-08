#include<stdio.h>
int main()
{
    int a[4][2];
    printf("Enter Roll no. | Marks\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    printf(" Rollno.||  Marks\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("|   %d   |",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}