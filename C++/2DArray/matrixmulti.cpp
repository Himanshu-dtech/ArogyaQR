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
    int c;
    cout<< "Enter the order of square matrix:";
    cin >>c;
    int b[c][c];
    cout<<"Enter the elements=";
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    int res[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            res[i][j];
            for(int k=0;k<r;k++)
            {
                res[i][j]=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"Product of two matrix="<<"\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"|"<<res[i][j]<<"|";
        }
        cout<<"\n";
    }
    return 0;
}