#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cout<<"Enter the no. of terms=";
    cin>>n;
    cout<<"Enter the base=";
    cin>>x;
    for(int i=1;i<n;i++)
    {
        sum+=pow(x,pow(2,i));
    }
    cout<<"Sum of series upto " << n <<" terms="<<x+sum;
    return 0;
}