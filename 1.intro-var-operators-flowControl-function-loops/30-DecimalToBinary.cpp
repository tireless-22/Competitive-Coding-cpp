#include<bits/stdc++.h>
using namespace std;
int main(){

	int n=35;

	string bin;
	string temp;
	string binn;
	


	while(n!=0){
		temp=n%2+48;
		bin=bin+temp;
		n=n/2;
	}
	
	int len=bin.size();
	
	for (int i=len-1;i>=0;i--){
		binn+=bin[i];

	}
	cout<<binn;
	
	return 0;
}