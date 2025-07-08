#include<iostream>
using namespace std;
int prime(int x)
{
    int count=0;
    if(x==1){
        count=1;
    }
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0){
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<x<<"\n";
    }
}
int range(int n)
{
    for(int i=1;i<=n;i++)
    {
        prime(i);
    }
}
int main()
{
    int p;
    cout<<"Enter the range=";
    cin>>p;
    range(p);
    return 0;
}
