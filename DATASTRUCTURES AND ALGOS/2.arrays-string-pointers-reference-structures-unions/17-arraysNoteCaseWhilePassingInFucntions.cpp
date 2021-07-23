#include<bits/stdc++.h>
using namespace std;

void func(int b[],int n){
	// passing the size of the array is 
	// prefered more ,here it is called
	// through pointers
	// so the size is different
	cout<<n;

	// for each will not not if we passed and used the 
	// used in another function

	for (int i = 0; i < n; ++i)
	{

		cout<<b[i]<<endl;
	}


	cout<<"hello";

}



int main (){
	int a[] {34,3534,53432,534};
	int n=sizeof(a)/sizeof(a[0]);


	for (int x: a)
		cout<<x<<"  ";
	cout<<endl;

	func(a,n);


	return 0;
}