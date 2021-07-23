#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="hello this is knk";
	cout<<s<<endl;
	string a="naveen";
	string b="karthik";
	string c="34";
	cout<<a+b<<endl;
	cout<<a.append(b)<<endl;
	cout<<a.length()<<endl;
	cout<<a+" "+c<<endl;
	cout<<a[0]<<endl;
	for (int i=0;i<a.length();i++){
		cout<<a[i]<<endl;
	}

	cout<<"the sub string is present at "<<s.find("this")<<endl;
	s.pop_back();
	// removes last element
	s.push_back('d');
	// adds only one character at the end of the string
	s.append("this is");
	cout<<s<<endl;

	cout<<s.substr(3,4)<<endl;
	// 3 means where to star the substring
	// 4 means how many characters did you need
	s.insert(3,a);
	// first thing refers that where to start
	// second thing refers to what to insert

	cout<<s;

	
}