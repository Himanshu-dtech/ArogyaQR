#include<iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter no. of rows=";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            int d=i+64;
            char ch=(char)d;
            cout<<ch;
        }
        cout<<"\n";
    }
    return 0;
}