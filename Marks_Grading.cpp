#include<iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter the marks secured : ";
cin>>marks;
if (marks<40)
cout<<"F";
else if(marks>=40 && marks<50)
cout<<"Grade D ";
else if(marks>50 && marks<70)
cout<<"Grade C";
else if(marks>70&& marks<90)
cout<<"Grade B";
else if(marks>90)
cout<<"Grade A";
    return 0;
}