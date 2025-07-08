#include<stdio.h>
void decreasing(int n)
{
    if (n==0) return;
    printf("%d\n" ,n);
    decreasing(n-1);
    printf("%d\n" ,n);
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