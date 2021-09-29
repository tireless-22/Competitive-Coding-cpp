#include<bits/stdc++.h>

using namespace std;



int fib(int n,int a[]){
	if(n==0 or n==1){
		return n;
	}
// checking if the value is already computed
	if(a[n]!=0){
		return a[n];
	}
	a[n]=fib(n-1,a)+fib(n-2,a);
	for(int i=0;i<=10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return a[n];
}


int main(){

	int n;
	cin>>n;

	// vector<int> v(n+1,0);
	int a[100]={0};
	// for (int x:v){
	// 	cout<<x<<endl;
	// }


	cout<<fib(n,a);
	return 0;
}