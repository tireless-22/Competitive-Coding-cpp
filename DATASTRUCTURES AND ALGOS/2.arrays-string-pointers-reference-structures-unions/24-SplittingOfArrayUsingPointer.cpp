#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[] ={234,234,234,256,346,356};
	int *p1=arr;
	// it will just store adress of first element in  the array
	// arr gives the adress the adress of the first elements
	cout<<*p1<<endl;


	int (*p2)[6]=&arr;
	// it will point the array of size 6
	cout<<**p2<<endl;
	// double pointers are used to store the adress of an full array


	return 0;

}