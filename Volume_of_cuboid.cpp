#include<iostream>
using namespace std;
int main(){
    double l,w,h,v;
    cout<<"Enter Length of Cuboid : ";
    cin>>l;
    cout<<"Enter Width of cuboid : ";
    cin>>w;
    cout<<"Enter Height of cuboid : ";
    cin>>h;
    v=l*w*h;
    cout<<"Volume of cuboid in cubic unit is : "<<v<<endl;
    return 0;
}