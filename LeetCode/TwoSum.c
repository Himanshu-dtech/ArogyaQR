#include<stdio.h>
int main()
{
    int arr[100];
    int n,target;
    printf("Enter the no. of inputs=");
    scanf("%d",&n);
    printf("Input array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the target:");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("[%d,%d]",i,j);
            }
        }
    }
    return 0;
}