#include<stdio.h>
int main()
{
    int M,S,H,E,B,sum;
    float per;
    printf("Enter the marks of Maths=");
    scanf("%d",&M);
    printf("Enter the marks of Science=");
    scanf("%d",&S);
    printf("Enter the marks of Hindi=");
    scanf("%d",&H);
    printf("Enter the marks of English=");
    scanf("%d",&E);
    printf("Enter the marks of Biology=");
    scanf("%d",&B);
    sum=M+S+H+E+B;
    printf("Sum of marks=%d\n",sum);
    per=sum/5;
    printf("Percentage=%f\n",per);
    if(per<=100 && per>90)
    {
        printf("Grade=A");
    }
    else if(per<=90 && per>80)
    {
        printf("Grade=B");
    }
    else if(per<=80 && per>60)
    {
        printf("Grade=C");
    }
    else if( per<=60 && per>1)
    {
        printf("Grade=D");
    }
    return 0;
}