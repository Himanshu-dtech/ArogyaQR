#include<stdio.h>
int main()
{
    int a[100],n,x,count=0;
    printf("Enter the no. of inputs=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d element=",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter no. to be searched=");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("Number found at Index %d",i);
            break;
        }
        count+=i;
    }
    if(count==n)
    {
        printf("!!!!!!!!! Number not found !!!!!!!!");
    }
    
    return 0;
}