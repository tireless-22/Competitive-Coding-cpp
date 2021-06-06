#include<bits/stdc++.h>
using namespace std;
int main (){
	// traversal of an using using the
	// normal for loop and range based for loop
	int a[]={3,435,3432,534};
	int len=sizeof(a)/sizeof(a[0]);
	for (int i =0; i <len ;i++){
		cout<<a[i]<<endl;
	}

	// by using the for loop by aliasing the given array
	
	for (int &x : a){
		cout<<x<<endl;

	}


	return 0;
}