#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter the value of n to find sum : ";
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum of First "<< n << " natural number is : "<<sum;


    return 0;
}