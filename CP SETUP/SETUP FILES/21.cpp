#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		unsigned long long finalOP=0;
		unordered_map<long long,long long> uoCounter;
		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			uoCounter[temp]++;
		}

		for (auto x:uoCounter){
			finalOP=finalOP+(x.second*(n-x.second))%(10^9+7);
		}

		cout<<finalOP<<"\n";

		
		
	}	
	return 0;
}