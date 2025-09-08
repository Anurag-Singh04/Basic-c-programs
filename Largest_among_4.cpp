#include<iostream>
using namespace std;
int main(){
    double a,b,c,d;
    cout<<"Enter 1st value : ";
    cin>>a;
    cout<<"Enter 2nd value : ";
    cin>>b;
    cout<<"Enter 3rd value : ";
    cin>>c;
    cout<<"Enter 4th value : ";
    cin>>d;
    if(a>b&&a>c&&a>d)
    cout<<" largest number is : "<<a<<endl;
    if(b>a&&b>c&&b>d)
    cout<<" largest number is : "<<b<<endl;
    if(c>b&&c>a&&c>d)
    cout<<" largest number is : "<<c<<endl;
    if(d>b&&d>c&&d>a)
    cout<<" largest number is : "<<d<<endl;
    

    return 0;
}