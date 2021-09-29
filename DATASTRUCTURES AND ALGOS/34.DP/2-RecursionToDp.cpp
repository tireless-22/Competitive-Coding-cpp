#include<bits/stdc++.h>
using namespace std;

int fibTopDown(int n,int a[]){
	// top down dp
	if (n==0 or n==1){
		return n;
	}
	// look up for the values that we stored previously
	if (a[n]!=0){
		return a[n];

	}
	a[n]=fibTopDown(n-1,a)+fibTopDown(n-2,a);
	for (int i=0;i<=10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return a[n];
}


// int fibBottomUp(int n){
// 	// time ==o(n)
// 	// space ==o(n)

// 	int fibBottom[100]={0};
// 	fibBottom[1]=1;


// 	for(int i=2;i<=n;i++){
// 		fibBottom[i]=fibBottom[i-1]+fibBottom[i-2];
// 	}
// 	return fibBottom[n];
// }




int main(){

	int a[100]={0};
	int n;
	cin>>n;
	cout<<"fib top down approach  "<<fibTopDown(n,a)<<endl;
	// cout<<"fib bottom up approach  "<<fibBottomUp(5)<<endl;
	// cout<<"fib bottom up optimised"<<fibBottomUpOptimised(5)<<endl;

	return 0;
}