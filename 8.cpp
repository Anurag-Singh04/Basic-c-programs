#include<iostream>
using namespace std;
int main(){
	int i,j;
	int num=5;
	int a=65;
	for(i=0;i<=num;i++){
		for(j=0;j<=i;j++){
			cout<<char(a+j);
		}
	cout<<endl;	
	}
	return 0;
}
