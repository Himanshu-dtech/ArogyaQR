#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,D,s1,s2,i1,i2;
    cout<<"Enter the co-efficient of x^2=";
    cin>>a;
    cout<<"Enter the co-efficient of x=";
    cin>>b;
    cout<<"Enter the constant=";
    cin>>c;
    D=pow(b,2)-4*a*c;
    if(D>=1){
        s1=(-b+pow(D,0.5))/(2*a);
        s2=(-b-pow(D,0.5))/(2*a);
        cout<<"Solutions of quadratic equation are "<<s1<<" and "<<s2<<"\n";
    }
    else if(D<1){
        D=D*(-1);
        s1=s2=-b/(2*a);
        i1=i2=pow(D,0.5)/(2*a);
        cout<<"Solutions of quadratic equation are "<<s1<<"+i"<<"("<<i1<<")"<<" and "<<s2<<"-i"<<"("<<i2<<")"<<"\n";        
    }
    return 0;

}