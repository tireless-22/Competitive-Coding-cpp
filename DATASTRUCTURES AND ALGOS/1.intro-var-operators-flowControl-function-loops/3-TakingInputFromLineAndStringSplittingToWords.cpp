#include<bits/stdc++.h>
using namespace std;
int main (){
	string s;
	string temp;
	getline(cin,s);
	// cout<<s;

	// in string each small character is of type char
	//so while checking use single braces only

	for (int i=0;i<s.size();i++){
		if (s[i]==' '){
			cout<<temp<<endl;
			temp="";
		}
		else{
			temp+=s[i];
		}
	}

	return 0;

	
}