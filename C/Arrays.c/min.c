#include<stdio.h>
int main()
{
    int a[100],n,x;
    printf("Enter the number of inputs=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element=",i+1);
        scanf("%d",&a[i]);
    }
    x=a[0];
    for(int i=0;i<n;i++)
    {
        int y=a[i];
        if(x>y)
        {
            x=y;
        }
    }
    printf("%d is minimum element in this array\n",x);
    return 0;
}