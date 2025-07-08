#include<stdio.h>
int main()
{
    int m[100],n;
    printf("Enter no. of students data to be filled=");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a=i+1;
        printf("Enter the Marks of Roll %d Student=",a);
        scanf("%d",&m[i]);
    }
    printf("Roll of Students who scored less than 35:\n");
    for(int i=0;i<n;i++)
    {
        if(m[i]<35)
        {
            printf("Roll no. %d\n",i+1);
        }
    }
    return 0;
}