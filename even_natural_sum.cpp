#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    cout<<"Enter the value of n ; ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    cout<<"Sum of first "<< n <<" even natural number "<<sum<<endl;
    return 0;
}