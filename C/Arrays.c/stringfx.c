#include<stdio.h>
#include<string.h>
int main()
{   
    int count=0;
    char str[30];
    printf("Enter the string=");
    scanf("%[^\n]s",&str);
    int i=0;
    while(str[i]!='\0')
    {
        i++;
        count++;
    }
    printf("Length of String=%d\n",count);
    char str1[30];
    puts("Enter the string=");
    scanf("%s",&str1);
    char str2[30];
    puts("Enter the string=");
    scanf("%s",&str2);
    int k=0,j=0;
    while(str1[k]!='\0')
    {
        k++;
    }
    while(str2[j]!='\0')
    {
        str1[k]=str2[j];
        k++;
        j++;
    }
    printf("Combined String=%s\n",str1);
    char str3[30];
    int l=0,m=0;
    while(str1[l]!='\0')
    {
        str3[m]=str1[l];
        l++;
        m++;
    }
    printf("Copied string=%s",str3);
    return 0;
}