#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first side of triangle : ";
    cin>>a;
    cout<<"Enter second side of triangle  : ";
    cin>>b;
    cout<<"Enter third side of triangle : ";
    cin>>c;
    if(a==b && b==c){
    cout<<"Equilateral Triangle ";
}
    if((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a)){
    cout<<"Isosceles Triangle";
}
    if (a!=b && b!=c&&c!=a){
    cout<<"Scalene Triangle";
}
    return 0;
}