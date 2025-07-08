#include<stdio.h>
int main()
{
    int a[100],n,sum=0;
    printf("Enter the no. of input=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element=",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("Sum of elements of arrays=%d",sum);
    return 0;
}