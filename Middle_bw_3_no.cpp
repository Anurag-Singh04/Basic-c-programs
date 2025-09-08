#include<iostream>
using namespace std;
int main(){
double a,b,c;
cout<<"Enter 1st Number : ";
cin>>a;
cout<<"Enter 2nd Number : ";
cin>>b;
cout<<"Enter third Number : ";
cin>>c;
if((a<c&&c<b)||(b<c&&c<a))
cout<<"middle number is : "<<c<<endl;
else if((a<b&&b<c)||(c<b&&b<a))
cout<<"Middle number is : "<<b<<endl;
else if((b<a&&a<c)||(c<a&&a<b))
cout<<"Middle no is : "<<a<<endl;
return 0;
}