#include<stdio.h>
int sum(int n)
{
    if(n==0 || n==1) return n;
    int recAns=n+ sum(n-1);
    return recAns;
}
int main()
{
    int n;
    printf("Enter n=");
    scanf("%d",&n);
    int S=sum(n);
    printf("%d",S);
    return 0;
}