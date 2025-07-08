#include<stdio.h>
#include<math.h>
int factorial(float n)
{
    int fact=1;
    for(int j=2;j<=n;j++){
        fact=fact*j;
    }
return fact;
}
int main()
{
    float n,val=0,X,val2;
    printf("Enter the no. of terms=");
    scanf("%f",&n);
    printf("Enter the value of X=");
    scanf("%f",&X);
    printf("Series=");
    for(int i=0;i<n;i++){
        val2=((pow(-1,i))*(pow(X,i)))/factorial(i);
        val+=((pow(-1,i))*(pow(X,i)))/factorial(i);
        if(i%2==0){
            printf(" +%.2f",val2);
        }
        if(i%2!=0){
            printf(" %.2f",val2);
        }
       
    }
    printf("\nValue=%f",val);
    return 0;
}