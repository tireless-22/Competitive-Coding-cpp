#include<bits/stdc++.h>
using namespace std;

// given bottom up code for minimum steps to 1

int minStepBottomUp(int v[],int n){
	if (n==1){
		return 0;
	}

	for (int i=2;i<=n;i++){
		int op1,op2,op3;
		op1=op2=op3=INT_MAX;

		if(i%2==0 ){
			op1=v[i/2];
			
		}
		if (i%3==0){
			op2=v[i/3];
		}
		
		
		op3=v[i-1];

		v[i]=min({op1,op2,op3})+1;
		
	}


	return v[n];
}


int main(){


	int v[100]={0};
	int n=9;

	cout<<minStepBottomUp(v,n);

	return 0;
}