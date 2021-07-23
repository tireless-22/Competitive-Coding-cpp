#include<bits/stdc++.h>
using namespace std;
int main (){
	int *p=new int;
	*p=3;
	cout<<*p<<endl;

	int *arr=new int [43];

	int n;
	n=244;

	int *a=new int[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}

	// a is a pointer of a array
	// but we can access the elements as normally as we do in the arrays
	cout<<a[2];
	cout<<*(a+2);
	// both are allowed
	return 0;
}