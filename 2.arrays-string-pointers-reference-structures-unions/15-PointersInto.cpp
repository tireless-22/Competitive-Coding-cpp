#include<bits/stdc++.h>
using namespace std;
int main (){
	int x=34;
	int *p;
	// references are just like pointers
	// and references are also called as the constant pointers
	// changes made through pointer variable will get reflected to the main varaible

	// we are making the variable to store the adress that it 

	p=&x;
	// this is called referencing operator
	// we are storing the address of other variable in the pointer variable

	cout<<p<<endl;
	// it will print the adress of that other variable

	cout<<*p<<endl;
	*p+=4;

	cout<<*p<<endl;
	cout<<x<<endl;
	x+=5;
	cout<<*p<<endl;
	cout<<x<<endl;



	
	return 0;
}