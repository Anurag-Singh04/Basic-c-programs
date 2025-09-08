#include<iostream>
using namespace std;
int main(){
int m,y;
cout<<"Enter the year : ";
cin>>y;
cout<<"Enter month from 1 to 12 : ";
cin>>m;
switch(m){
    case 1:
    cout<<"January 31 days";
    break;
    case 2:
    if(y%4==0)
    cout<<"Leap Year February 29 days ";
    else
    cout<<"February 28 days ";
    break;
    case 3:
    cout<<"march 31 days ";
    break;
    case 4:
    cout<<"April 30 days ";
    break;
    case 5:
    cout<<"May 31 days ";
    break;
    case 6:
    cout<<"Jun 30 days ";
    break;
    case 7:
    cout<<"July 31 days ";
    break;
    case 8:
    cout<<"August 31 days ";
    break;
    case 9:
    cout<<"september 30 days ";
    break;
    case 10:
    cout<<"October 31 days ";
    break;
    case 11:
    cout<<"November 30 days ";
    break;
    case 12:
    cout<<"December 31 days ";
    break;
    default:
    cout<<"Wrong choice ";
    
}
    return 0;
}