#include<bits/stdc++.h>
using namespace std;

// prime sieve algorithm
// this will allow us to print all the primes with a very low time complexity


int main(){
	int N=1e6;
	cout<<N;
	vector<int> v(N,0);
	for(int i=2;i*i<=N;i++){
		if(v[i]==0){
			for (int j=i*i;j<N;j+=i){
				v[j]=1;
			}

		}
	}
	for (int i=2;i<N;i++){
		if(v[i]==0){
			cout<<i<<"\n";
		}
	}

	return 0;
}