#include<stdio.h>
#include<string.h>
int main()
{
        typedef struct Cricketer{
        char name[20];
        int age;
        int Noofmatches;
        float averageRuns;
    }Cricketer;
    Cricketer a[2];
    for(int i=1;i<=2;i++){
        printf("Enter Name=");
        scanf("%s",a[i].name);
        printf("Enter Age=");
        scanf("%d",&a[i].age);
        printf("Enter No. of Matches played=");
        scanf("%d",&a[i].Noofmatches);
        printf("Enter Average Run scored=");
        scanf("%f",&a[i].averageRuns);    
    }
    for(int i=1;i<=2;i++){
        printf("Name: %s\n",a[i].name);
        printf("Age: %d\n",a[i].age);
        printf("No. of matches played: %d\n",a[i].Noofmatches);
        printf("Average Runs Scored=%f\n\n",a[i].averageRuns);    
    }
    return 0;

}