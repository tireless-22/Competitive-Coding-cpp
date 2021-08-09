#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n ;
		cin>>n;
		int finalOP=0;
		unordered_map<int ,int> uoCounter;
		for (int i=0;i<n;i++){
			int temp;
			cin>>temp;
			uoCounter[temp]++;
		}

		for(auto x:uoCounter){
			if(x.second<x.first){
				finalOP+=x.second;

			}
			else{
				finalOP+=x.first-1;
			}
		}
		cout<<finalOP<<"\n";
		
	}	

	return 0;
}