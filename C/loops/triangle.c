#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the length of a=");
    scanf("%d",&a);
    printf("Enter the length of b=");
    scanf("%d",&b);
    printf("Enter the length of c=");
    scanf("%d",&c);
    if(a+b>c || a+c>b || b+c>a){
        printf("Triangle exists\n");
        if(a==b && b==c && a==c){
            printf("The given triangle is equilateral triangle\n");
        }
        else if(a==b || b==c || a==c){
            printf("The given traingle is Isosceles Traingle\n");
        }
        else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
            printf("The given traingle is a right angled triangle\n");
        }
        else if(a!=b!=c){
            printf("The given traingle is Scalene Triangle\n");
        }
        
    }
    else{
        printf("Triangle don't exist\n");
    }
    
    return 0;
}