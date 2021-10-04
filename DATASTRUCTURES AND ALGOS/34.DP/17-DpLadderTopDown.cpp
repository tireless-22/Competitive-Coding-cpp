#include<bits/stdc++.h>
using namespace std;


long long int fn(int n,int k,vector<int>v){
	if(n==0){
		return 1;
	}

	if(v[n]!=0){
		return v[n];
	}

	long long int res=0;
	for(int i=1;i<=k;i++){
		if(n>=i){
			res+=fn(n-i,k,v);
		}
	}
	return v[n]=res;
}



int main(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n+1,0);
	cout<<fn(n,k,v);
	return 0;

}