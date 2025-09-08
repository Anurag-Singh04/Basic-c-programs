#include<iostream>
#include<string>
using namespace std;
int main(){
    string month,day,year,date_str;
    cout<<"Enter the Day,Month and Year in format DD/MM/YYYY : ";
    cin>>date_str;
    day=date_str.substr(0,2);
    month=date_str.substr(3,2);
    year=date_str.substr(6,4);
    cout<<"Day - "<<day<<" , Month - "<<month<<" , Year - "<<year;
    return 0;

} 