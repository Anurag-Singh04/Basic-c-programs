#include<iostream>
using namespace std;
int main(){
	int i,j;
	int num=15;
	for(i=0;i<=num;i++){
		for(j=0;j<=num;j++){
			if(i==num/2||j==num/2||(i<=num/2&&j==0)||(j<=num/2&&i==num)||(j>=num/2&&i==0)||(i>=num/2&&j==num))
			cout<<"*";
			else
			cout<<" ";
		}
	cout<<endl;	
	}
	return 0;
}
