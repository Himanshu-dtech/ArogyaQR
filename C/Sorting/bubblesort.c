#include<stdio.h>
int main()
{
    int a[100],n;
    printf("Enter the number of inputs=");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d element=",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1]){
                int x=a[j+1];
                a[j+1]=a[j];
                a[j]=x;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("Sorted Array=%d",a[i]);
    }
    return 0;
}