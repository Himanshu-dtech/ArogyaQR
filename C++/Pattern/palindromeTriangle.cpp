#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no. of rows=";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=rows-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<i+k-1;
        }
        for(int l=1;l<=i-1;l++)
        {
            cout<<2*i-l-1;
        }
        cout<<"\n";
    }
    
    return 0;
}