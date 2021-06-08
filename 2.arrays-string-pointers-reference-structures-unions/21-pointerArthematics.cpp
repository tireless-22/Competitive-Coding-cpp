#include<bits/stdc++.h>
using namespace std;
int main (){
	int arr[] {3453,523,623422,25,3,5,3,4};
	// for (int x:arr)
	// 	cout<<x<<endl;
	int *a=arr;
	cout<<*a<<endl;
	cout<<*(a+2)<<endl;

	cout<<*(a+2)-*(a);
	a+=2;
	cout<<*a;

	int *b;
	int *c;
	b=a;
	cout<<*b;

	c=a+3;
	cout<<*c<<endl;

	cout<<*c-*b;







	
	return 0;
}