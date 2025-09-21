#include<iostream>
using namespace std;
int main(){
	int i,j;
	int num=5;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			if(i==0||j==0||i==num-1||j==num-1)
			cout<<"*";
			else
			cout<<" ";
		}
	cout<<endl;	
	}
	return 0;
}
