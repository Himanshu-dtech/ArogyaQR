#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,n,t;
    printf("Enter the first term=");
    scanf("%d",&a);
    printf("Enter the common ratio=");
    scanf("%d",&r);
    printf("Enter the no. of terms=");
    scanf("%d",&n);
    printf("GP=");
    for(int i=1;i<=n;i++)
    {
        t=a*(pow(r,i-1));
        printf("%d,",t);
    }
    return 0;
}