#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    cout<<"Enter the value of n ; ";
    cin>>n;
    for(int i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    cout<<"Sum of first "<< n <<" odd natural number "<<sum<<endl;
    return 0;
}