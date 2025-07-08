#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<< "Enter the order of square matrix:";
    cin >> r;
    int a[r][r];
    cout<<"Enter the elements=";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            cout<<"|"<< a[i][j]<< "|";
        }
        cout<<"\n";
    }
    return 0;
}