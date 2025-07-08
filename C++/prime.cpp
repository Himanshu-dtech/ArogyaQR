#include<iostream>
using namespace std;
int main()
{
    int x,count;
    cout<<"Enter the number=";
    cin >> x;
    if(x==0 || x==1)
    {
        count=1;
    }
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        cout<<x<<" isn't a prime number";
    }
    else{
        cout<<x<<" is a prime number";
    }
    return 0;
}