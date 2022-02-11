#include<bits/stdc++.h>
using namespace std;
bool palinddromeChecker(string s){

	int f=0;
	int l=s.size()-1;
	bool checker=true;

	while(f<=l){
		if(s[f]!=s[l]){
			checker=false;	
		}
		f++;
		l--;
	}
	return checker;
}


int main(){
	string s1;
	cin>>s1;
	cout<<palinddromeChecker(s1);
	return 0;
}
