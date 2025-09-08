#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    cout<<"Enter the value of n ; ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=(i*i)+sum;
    }
    cout<<"Sum of square of first "<< n <<" natural number "<<sum<<endl;
    return 0;
}