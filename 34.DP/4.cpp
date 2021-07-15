#include<bits/stdc++.h>
using namespace std;

// by bottom up code for minimum steps to 1

int minStepBottomUp(int v[],int n){
	if (n==1){
		return 0;
	}

	for (int i=2;i<=n;i++){
		if(i%2==0 and i%3==0){
			v[i]=min({v[i-1],v[i/3],v[i/2]})+1;
		}
		else if (i%3==0){
			v[i]=min({v[i-1],v[i/3]})+1;
		}
		else if(i%2==0){
			v[i]=min({v[i-1],v[i/2]})+1;
		}
		else{
			v[i]=v[i-1]+1;
		}
	}


	return v[n];
}


int main(){


	int v[100]={0};
	int n=24;

	cout<<minStepBottomUp(v,n);



	return 0;
}