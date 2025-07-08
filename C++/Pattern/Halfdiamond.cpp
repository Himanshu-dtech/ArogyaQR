#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter the no. of rows=";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=rows-1;i++)
    {
        for(int j=1;j<=rows-i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}