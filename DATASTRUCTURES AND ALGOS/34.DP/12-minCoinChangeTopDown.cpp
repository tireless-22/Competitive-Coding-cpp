#include<bits/stdc++.h>
using namespace std;


int minCoinChange(int n,int a[]){
	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;

	if(n==0){
		// base case
		return 0;
	}

	// check if already exists

	if(a[n]!=0){
		return a[n];
	}

 

	if(n>=1){
		op1=minCoinChange(n-1,a);


	}

	if(n>=7){
		op2=minCoinChange(n-7,a);
	}


	if(n>=10){
		op3=minCoinChange(n-10,a);
	}


	a[n]=min({op1,op2,op3})+1;

	return a[n];


}

int main(){
	int coins[]={1,7,10};
	int money;
	cin>>money;
	// cout<<money;

	int a[1000]={0};

	cout<<minCoinChange( money,a);







	return 0;
}