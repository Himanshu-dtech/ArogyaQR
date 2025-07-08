#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    int fact=1;
    for(int j=2;j<=n;j++){
        fact=fact*j;
    }
return fact;
}
int main()
{
    float x,Q,sum=0;
    int limit;
    printf("Enter no. of terms to print=");
    scanf("%d",&limit);
    printf("Enter value of x=");
    scanf("%f",&x);
    Q=x;
    x=x*(3.1415/180);
    for(int i=1,j=1;i<=limit;i++,j=j+2)
    {
        if(i%2!=0){
            sum+=pow(x,j)/factorial(j);
        }
        else{
            sum-=pow(x,j)/factorial(j);
        }
    }
    printf("\nsin(%0.1f):%f",Q,sum);
return 0;
}