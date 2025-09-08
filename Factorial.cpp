#include<iostream>
using namespace std;
int main(){
    int fact,a;
    cout<<"Enter the no for factorial : ";
    cin>>a;
    fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;

    }
    cout<<"Factorial of "<< a <<" is "<<fact;
    return 0;
}