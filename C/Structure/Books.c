#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[100];
        float price;
        int pages;
    }a,b,c;
    strcpy(a.name,"Harry Potter and the Deathly Hallows");
    a.price=500.055;
    a.pages=400;
    printf("%s\n",a.name);
    printf("%d pages\n",a.pages);
    printf("Cost of book=%f\n",a.price);
    strcpy(b.name,"Harry Potter and the Half Blood Prince");
    b.price=487.55;
    b.pages=321;
    printf("%s\n",b.name);
    printf("%d pages\n",b.pages);
    printf("Cost of book=%f\n",b.price);

    return 0;
    
}