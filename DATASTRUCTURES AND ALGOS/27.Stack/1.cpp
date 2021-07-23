#include<bits/stdc++.h>

using namespace std;

bool match(char c1, char c2){
	return ((c1=='(' and c2==')') or (c1=='{' and c2=='}') or (c1=='[' and c2==']'));
}


bool check(string s){
	
	stack<char> stck;
	for (int i=0;i<s.length();i++){
		if (s[i]=='(' or s[i]== '[' or s[i]== '{'){
			stck.push(s[i]);
		}
		else{
			if (stck.empty()){
				cout<<"stack empty";
				return false;
			}
			else if(match(stck.top(),s[i])==false){
				return false;
			}
			else{
				stck.pop();
			}
		}
	}
	return stck.empty();
}

int main(){
	string s="{}[()]";
	// cout<<s.length();
	cout<<check(s);



	return 0;
}