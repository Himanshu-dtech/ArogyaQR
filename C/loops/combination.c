#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for(int i=2;i<=x;i++)
        {
            fact=fact*i;
        }
    return fact;
}
int main()
{
    int n,r;
    printf("Enter the total no. of objects(n)=");
    scanf("%d",&n);
    printf("Enter the no. of chosing objects(r)=");
    scanf("%d",&r);
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("No. of combination =%d ",nCr);
    return 0;
}