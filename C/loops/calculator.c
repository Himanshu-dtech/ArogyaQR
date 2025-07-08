#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,n;
    printf(" List of Choices:\n 1.Addition \n 2.Subraction\n 3.Multiplication\n 4.Division \n 5.Exit\n");
    while(1){
        printf("Enter your Choice=\n");
        scanf("%d",&n);
        switch(n){
            case 1:
            printf("Value of a=");
            scanf("%d",&a);
            printf("Value of b=");
            scanf("%d",&b);
            c=a+b;
            printf("Sum of two numbers is %d\n",c);
            break;
            case 2: 
            printf("Value of a=");
            scanf("%d",&a);
            printf("Value of b=");
            scanf("%d",&b);
            c=a-b;
            printf("Difference of two numbers is %d\n",c);
            break;
            case 3: 
            printf("Value of a=");
            scanf("%d",&a);
            printf("Value of b=");
            scanf("%d",&b);
            c=a*b;
            printf("Product of two numbers is %d\n",c);
            break;
            case 4: 
            printf("Value of a=");
            scanf("%d",&a);
            printf("Value of b=");
            scanf("%d",&b);
            c=a/b;
            printf("Quotient of two numbers is %d\n",c);
            break;
            case 5:
            exit(0);
        }
    }
    return 0;

}