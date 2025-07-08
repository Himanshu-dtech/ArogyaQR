#include<stdio.h>
int main()
{
    int a[]={5,9,8,7,6,2};
    int *p=&a;
    printf("%d\n",*(p+4));
    printf("%d\n",*(p+1));
    printf("%d\n",*p);
    printf("%d\n",*p++);
    printf("%d\n",*++p);
    printf("%d",++*p);

}
