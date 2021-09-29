#include<bits/stdc++.h>
using namespace std;


int fn(int n,int v[]){
	if(n==0){
		return 0;

	}

	

	if(v[n]!=0){
		return v[n];
	}
	int sum;

	v[n]=fn(n-1,v)+1;
	sum=v[n];

	for(int i=0;i<=10;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;


	return sum;
}


int main(){

	int n=10;
	// vector<int>v(n+1,0);
	int v[100]={0};

	cout<<fn(n,v);






	return 0;
}