#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the no. of terms=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        else
        {
            sum=sum-i;
        }
    } 
    printf("Sum=%d",sum);  
    return 0;
}