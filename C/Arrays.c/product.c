#include<stdio.h>
int main()
{
    int a[100],n,Pro=1;
    printf("Enter the no. of input=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element=",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        Pro*=a[i];
    }
    printf("Product of elements of arrays=%d",Pro);
    return 0;
}