#include<stdio.h>
int main()
{
    float CP,SP,Profit,Loss;
    printf("Enter the Cost price=");
    scanf("%f",&CP);
    printf("Enter the Selling Price=");
    scanf("%f",&SP);
    Profit=SP-CP;
    Loss=CP-SP;
    if(SP>CP)
    {
        printf("Seller has made profit of %f rupees",Profit);
    }
    else if(CP>SP)
    {
        printf("Seller has incurred a loss of %f rupees",Loss);
    }
    return 0;
}