#include<stdio.h>
int main()
{
    int a[100],n,loop=0;
    printf("Enter the no. of inputs=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element =",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        for(int j=i+1;j<n;j++)
        {
            int y=a[j];
            if(x==y)
            {
                printf("%d is duplicate\n",y);
                break;
            }
            
        }
        loop+=i;
        
    }
    if(loop==n)
    {
        printf("No duplicate found");
    }
    
    return 0;
}