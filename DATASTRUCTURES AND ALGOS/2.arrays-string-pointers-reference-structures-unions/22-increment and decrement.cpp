#include<bits/stdc++.h>
using namespace std;
int main (){

	int a=34;
	int b;
	b=a++;
	// first saves and then increments

	cout<<b<<endl;
	cout<<a<<endl;
	b=++a;
	// first increments and then saves
	

	cout<<b<<endl;
	cout<<a<<endl;

	// 	cout<<a--<<endl;
	// cout<<a<<endl;
	
	// 	cout<<--a<<endl;
	// cout<<a<<endl;
	
	
	return 0;
}