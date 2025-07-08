#include<stdio.h>
int digit(int num){
    int count=0;
    while(num!=0){
        num=num/10;
        count++;
    }
    return count;
}
int main()
{
    int arr[100];
    int c=0,n;
    printf("Enter the no. of inputs=");
    scanf("%d",&n);
    printf("Enter the inputs=");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(digit(arr[i])%2==0){
            c++;
        }
    }
    printf("No. of even digits in array=%d",c);
    return 0;
}
