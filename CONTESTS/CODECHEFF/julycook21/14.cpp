#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin >>n>>k;
		unordered_map<int,int> uoCounter;
		for (int i=0;i<n;i++){
			int temp;
			cin>>temp;
			uoCounter[temp]++;
		}
		priority_queue<int> p;
		for (auto x:uoCounter){
			p.push(x.second);
		}
		int finalOP=0;
		int i=0;


		while(!p.empty() and i<=k){
			finalOP+=p.top();
			p.pop();

			i++;

		}
	
		cout<<finalOP<<"\n";	
	}	

	return 0;
}