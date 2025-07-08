#include<stdio.h>
int main()
{
    int N;
    int t1=0,t2=1;
    int nextterm=t1+t2;
    printf("No. of terms=");
    scanf("%d",&N);
    printf("Fibonacci series : %d,%d,",t1,t2);
    for(int i=3;i<=N;i++)
    {
        printf("%d,",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;      
    }
    return 0;
}