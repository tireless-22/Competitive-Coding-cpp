#include<bits/stdc++.h>
using namespace std;
// min steps to 1



int minSteps(int n,int a[]){
	// base case

	if(n==1){
		return 0;
	}

	// checking if the given sub problem is already computed

	if(a[n]!=0){
		return a[n];
	}



	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;

	if(n%2==0){
		op1=minSteps(n/2,a);
	}
	if(n%3==0){
		op2=minSteps(n/3,a);
	}
	op3=minSteps(n-1,a);



	a[n]=min({op1,op2,op3})+1;
	

	return a[n];

}


int main(){

	int n;
	cin>>n;
	int a[1000]={0};
	cout<<minSteps(n,a);








	return 0;
}