#include<bits/stdc++.h>
using namespace std;
int main (){

	int i=97;
	cout<<i<<endl;

// implicit type casting
	char c=i;
	cout<<c<<endl;



	int *p=&i;
	cout<<*p<<endl;
	

// expelicit type casting 
	char *pp=(char*)p;
	cout<<*pp<<endl;

	cout<<p<<endl;
	cout<<pp<<endl;


	string s;
	s=49;
	cout<<s;
	return 0;
}