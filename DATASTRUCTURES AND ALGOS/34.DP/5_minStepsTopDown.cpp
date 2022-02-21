#include<bits/stdc++.h>
using namespace std ;

// given top down code for minimum steps to 1
int minSteps(int  v[],int n){
	int op1,op2,op3;
	int minimum;
	op1=op2=op3=INT_MAX;
	
	if(v[n]!=0){
		return v[n];
	}

	if (n==1){
		return 0;
	}
	if(n%2==0){
		op1=minSteps(v,n/2)+1;
	}
	if(n%3==0){
		op2=minSteps(v,n/3)+1;
	}
	op3=minSteps(v,n-1)+1;
	minimum=min({op1,op2,op3});
	return v[n]=minimum;

}

int main(){

	int v[1000]={0};
	int n=825;
	cout<<minSteps(v,n);
	return 0; 
}