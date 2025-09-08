#include<iostream>
using namespace std;
int main(){
    double cp,sp,c;
    cout<<"Enter the cost price of banana per dozen : ";
    cin>>cp;
    cout<<"Enter the Selling price of banana per dozen : ";
    cin>>sp;
    c=((sp/12)*25-(cp/12)*25);
    if(c>=0){
        cout<<"profit upon selling 25 bananas : "<<c<<endl;
    }
    else{
        cout<<"Loss upon selling 25 bananas : "<<-c<<endl;
    }
    

    return 0;

}