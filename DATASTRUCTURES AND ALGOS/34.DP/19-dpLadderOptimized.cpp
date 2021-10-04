#include<bits/stdc++.h>
using namespace std;

// 1
// 1
// 2
// 4
// 8
// 15
// 29
int main(){
	long long int n,k;
	cin>>n>>k;
	vector<long long int>v(n+1,0);
	v[0]=1;
	v[1]=1;
	for (long long int i=2;i<=n;i++){
		if(i<=k){
			v[i]=2*v[i-1];
		}
		else{
			v[i]=2*v[i-1]-v[i-k-1];
		}
	}
	for (long long int x:v){
		cout<<x<<endl;
	}
	
	return 0;

}