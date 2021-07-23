#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=0;
		unordered_map<char,int> counter;
		for (int i=0;i<s.size();i++){
			if(counter[s[i]]<2){
				counter[s[i]]++;
				count++;
			}
		}
		cout<<count/2<<endl;

	}
	
	return 0;
}