#include<bits/stdc++.h>
using namespace std;
int main(){

	int n=3233;
	string temp;
	string octt;
	string oct;

	while (n>0){
		temp=48+n%8;
		octt+=temp;

		n=n/8;

	}

	// cout<<octt;
	int len=octt.size();

	for (int i=len-1 ; i>=0 ; i--){
		oct+=octt[i];
	}

	cout<<oct;
	return 0;

}