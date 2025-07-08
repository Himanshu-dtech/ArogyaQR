#include<stdio.h>
void decreasing(int n)
{
    if (n==0) return;
    decreasing(n-1);
    printf("%d\n",n);
    return;
}
int main()
{
    int n;
    printf("Enter n=",n);
    scanf("%d",&n);
    decreasing(n);
    return 0;
}