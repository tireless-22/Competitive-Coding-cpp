#include<bits/stdc++.h>
using namespace std;

void func(int *y){
	// recieved the adress
	cout<<*y<<endl;
	*y=*y+5;
	// dereferenced
	cout<<*y<<endl;

}


int main (){

	int x=343;
	func(&x);
	// passed the adress
	cout<<x;
	
	return 0;
}