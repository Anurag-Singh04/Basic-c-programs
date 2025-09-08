#include<iostream>
using namespace std;
int main(){
    int choice;
    double f,c;
    cout<<"Enter the choice \n 1 for celsius to fahrenheit \n 2 for fahrenheit to celsius : ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Enter temp in celsius : ";
        cin>>c;
        f=(c*9/5)+32;
        cout<<f<<" degree fahrenheit";
        break;
        case 2:
        cout<<"Enter temp in f : ";
        cin>>f;
        c=(f-32)*5/9;
        cout<<c<<" degree celsius ";
        break;
        default:
        cout<<"Wrong choice";
    }

    return 0;
}