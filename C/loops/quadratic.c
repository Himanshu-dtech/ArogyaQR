#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,s1,s2,i1,i2;
    printf("Enter the co-efficient of x^2=");
    scanf("%f",&a);
    printf("Enter the co-efficient of x=");
    scanf("%f",&b);
    printf("Enter the constant=");
    scanf("%f",&c);
    D=pow(b,2)-4*a*c;
    if(D>=1){
        s1=(-b+pow(D,0.5))/(2*a);
        s2=(-b-pow(D,0.5))/(2*a);
        printf("Solutions of quadratic equation are %f and %f\n",s1,s2);
    }
    else if(D<1){
        D=D*(-1);
        s1=s2=-b/(2*a);
        i1=i2=pow(D,0.5)/(2*a);
        printf("Solutions of quadratic equation are %f+i(%f) and %f-i(%f)\n",s1,i1,s2,i2);        
    }
    return 0;

}