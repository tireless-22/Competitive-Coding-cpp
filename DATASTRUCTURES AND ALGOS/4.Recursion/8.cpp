#include<bits/stdc++.h>
using namespace std;

vector<string> v={"zero","one","two","three","four","five","six","seven","eight","nine"};
void recurse(int n){
	if(n==0){
		return;
	}
	int t=n%10;
	recurse(n/10);
	// cout<<t;
	cout<<v[t]<<" ";
}


int main(){
	int n=2048;
	recurse(2048);


	return 0;
}