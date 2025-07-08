#include<stdio.h>
int main()
{
    int d,l,n,t;
    printf("Enter the last term=");
    scanf("%d",&l);
    printf("Common difference=");
    scanf("%d",&d);
    printf("Enter the no. of terms=");
    scanf("%d",&n);
    printf("AP:");
    for(int i=1;i<=n;i++)
    {
        t=l-(i-1)*d;
        printf("%d,",t);
    }
    return 0;
}