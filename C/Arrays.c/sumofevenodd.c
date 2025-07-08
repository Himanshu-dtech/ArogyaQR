#include<stdio.h>
int main()
{
    int a[100],n,SumO=0,SumE=0;
    printf("Enter the no. of inputs=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element=",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int y=a[i];
        if(i%2==0)
        {
            SumE+=y;
        }
        else if(i%2!=0)
        {
            SumO+=y;
        }
    }
    printf("Difference in Sum of Even and Odd indexes is %d",SumO-SumE);
    return 0;

}