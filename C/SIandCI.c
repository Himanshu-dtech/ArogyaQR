#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,SI,CI;
    printf("Enter the Principal amount=");
    scanf("%f",&P);
    printf("Enter the Rate of Interest=");
    scanf("%f",&R);
    printf("Enter the time=");
    scanf("%f",&T);
    SI=P*R*T/100;
    printf("Simple Interest=%f\n",SI);
    CI=(pow((1+(R/100)),T)+P);
    printf("Compound Interest=%f\n",CI);
    return 0;
}