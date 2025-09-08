#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    if(age>0 && age<12){
        cout<<"Child"<<endl;
    }
    else if(age>12 && age<18){
        cout<<"Teenager"<<endl;
    }
    else if(age>18 && age<60){
        cout<<"adult"<<endl;
    }
    else if(age>60){
        cout<<"senior"<<endl;
    }
    return 0;
}