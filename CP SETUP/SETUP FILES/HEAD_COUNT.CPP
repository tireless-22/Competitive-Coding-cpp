#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	while(t--){
		string s;
		cin>>s;
		int sizee=s.size();
		if(sizee%2==0){
			cout<<0<<endl;
		}
		else{
			cout<<s[sizee/2]<<endl;
		}
	}

	return 0;
}