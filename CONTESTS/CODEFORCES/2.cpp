#include<bits/stdc++.h>
using namespace std;
bool checker(string &s1,string &s2){
	int i=0;
	int j=0;
	if(s2.empty()){
		return 1;
	}
	if(s1.size()<s2.size()){
		return 0;
	}
	if(s1.size()==s2.size()){
		return s1==s2;
	}
	if((s1.size()-s2.size())%2==1){
		i++;
	}
	while(j<s2.size()){
		if(i>=s1.size()){
			return 0;
		}
		if(s1[i]!=s2[j]){
			i+=2;
		}
		else{
			i++;
			j++;
		}

	}
	return 1;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		if(checker(s1,s2)){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
		
	}



	return 0;
}