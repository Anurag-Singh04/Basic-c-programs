#include<iostream>
using namespace std;
int main(){
    float p,r,t,si;
    cout<<"Enter principal value in rupees : ";
    cin>>p;
    cout<<"Enter rate in percent : ";
    cin>>r;
    cout<<"Enter Time in year : ";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"Simple interest is : "<<si<<endl;
    return 0;
}