#include<stdio.h>
int min(int p,int q)
{
    if(p<q) return p;
    else return q;
}
int gcd(int a,int b)
{
    int hcf;
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
            break;
        }   
    }
    return hcf;
}
int main()
{
    int x,y;
    printf("Enter the first number=");
    scanf("%d",&x);
    printf("Enter the second number=");
    scanf("%d",&y);
    int HCF=gcd(x,y);
    printf("HCF is %d",HCF);
    return 0;
}