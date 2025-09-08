#include<iostream>
using namespace std;
int main(){
int s,e;
cout<<"Enter the starting year : ";
cin>>s;
cout<<"Enter the ending year : ";
cin>>e;
for(int i=s;i<e;i++){
    if(i%4==0){
        cout<<"Leap Year "<<i<<endl;
    }
}
    return 0;
}