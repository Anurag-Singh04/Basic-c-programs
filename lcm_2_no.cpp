
#include <iostream>
using namespace std;
int main() {
    int a,b,max,min,lcm;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    if(a>b){
        max=a;
        min=b;
    }
    else{
        max=b;
        min=a;
    }
    for(int i=1;i<=max;i++){
        if((max*i)%min==0){
            lcm=max*i;
            break;
        }
    }
    cout<<lcm;
    

    return 0;
}