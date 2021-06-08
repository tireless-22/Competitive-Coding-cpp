#include<bits/stdc++.h>
using namespace std;
int main (){
	int a[] {233,2342,3,3,4,3,2,4};
	int *p;
	p=a;

	

	cout<<*(p+1)<<endl;
	cout<<a[4]<<endl;

// this two are also correct but they are that much readable

	cout<<*(a+1)<<endl;
	cout<<p[4];


	
	return 0;
}