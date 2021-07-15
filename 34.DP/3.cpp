#include<bits/stdc++.h>
using namespace std ;

// my top down code for minimum steps to 1
int minSteps(int  v[],int n){
	int minimum=0;
	
	if(v[n]!=0){
		return v[n];
	}

	if (n==1){
		return 0;
	}
	else if(n%2==0 and n%3==0){
		minimum=min({minSteps(v,n-1),minSteps(v,n/2),minSteps(v,n/3)})+1;

	}
	else if (n%3==0){
		minimum=min({minSteps(v,n-1),minSteps(v,n/3)})+1;
	}
	else if(n%2==0){
		minimum=min({minSteps(v,n-1),minSteps(v,n/2)})+1;

	}
	else{
		minimum=minSteps(v,n-1)+1;
	}

	cout<<minimum<<"is the minimum for"<<n<<endl;
	
	return v[n]=minimum;

}

int main(){

	int v[100]={0};
	int n=24;
	cout<<minSteps(v,n);
	return 0; 
}