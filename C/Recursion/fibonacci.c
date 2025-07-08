#include<stdio.h>
int fibo(int n)
{
    if(n<=2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    printf("Enter the term=\n");
    scanf("%d",&n);
    int ans=fibo(n);
    printf("%d",ans);
    return 0;
}