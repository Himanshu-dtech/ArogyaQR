#include<stdio.h>
int main()
{
    int d,a,n,t;
    printf("Enter the first term=");
    scanf("%d",&a);
    printf("Common difference=");
    scanf("%d",&d);
    printf("Enter the no. of terms=");
    scanf("%d",&n);
    printf("AP:");
    for(int i=1;i<=n;i++)
    {
        t=a+(i-1)*d;
        printf("%d,",t);
    }
    return 0;
}