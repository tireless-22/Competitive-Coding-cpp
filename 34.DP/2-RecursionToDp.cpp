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
	int sum;
	sum=fibTopDown(n-1,a)+fibTopDown(n-2,a);
	return a[n]=sum;
}


int fibBottomUp(int n){
	// time ==o(n)
	// space ==o(n)

	int fibBottom[100]={0};
	fibBottom[1]=1;


	for(int i=2;i<=n;i++){
		fibBottom[i]=fibBottom[i-1]+fibBottom[i-2];
	}
	return fibBottom[n];
}

   
// 	int a=0;
// 	int b=1;
// 	int c;

// 	for (int i=2;i<=n;i++){
// 		c=a+b;

// 		a=b;
// 		b=c;

// 	}
// 	return c;


// }


int main(){

	int a[100]={0};
	cout<<"fib top down approach  "<<fibTopDown(12,a)<<endl;
	cout<<"fib bottom up approach  "<<fibBottomUp(5)<<endl;
	// cout<<"fib bottom up optimised"<<fibBottomUpOptimised(5)<<endl;

	return 0;
}