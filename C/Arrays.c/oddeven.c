#include<stdio.h>
int main()
{
    int a[100],n;
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
            a[i]=y*10;
        }
        else if(i%2!=0)
        {
            a[i]=y*2;
        }
    }
    printf("Modified Array=");
    for(int i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    return 0;

}