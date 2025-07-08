#include<stdio.h>
#define cube(N) N*N*N
int main()
{
    printf("%d\n", cube(3+3));
    int x=4;
    int z=x<<3;
    printf("%d",z);
    return 0;
}
