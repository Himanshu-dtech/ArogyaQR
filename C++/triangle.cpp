#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the length of a=";
    cin>>a;
    cout<<"Enter the length of b=";
    cin>>b;
    cout<<"Enter the length of c=";
    cin>>c;
    if(a+b>c || a+c>b || b+c>a){
        cout<<"Triangle exists\n";
        if(a==b==c){
            cout<<"The given triangle is equilateral triangle\n";
        }
        else if(a==b || b==c || a==c){
            cout<<"The given traingle is Isosceles Traingle\n";
        }
        else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
            cout<<"The given traingle is a right angled triangle\n";
        }
        else if(a!=b!=c){
            cout<<"The given traingle is Scalene Triangle\n";
        }
        
    }
    else{
        cout<<"Triangle don't exist\n";
    }
    
    return 0;
}