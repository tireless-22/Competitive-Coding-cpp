#include<bits/stdc++.h>
using namespace std;

// here we referced  to a local variable

int &func(){
	static int x =19;
	// we have to make sure to use the static if we did not do so 
	// the x will not be modified wheatther the z is modified
	// static means if is well known to every function in the program
	return x;
}


int main (){
	// if we returned the reference of a funtion and refeerce through another
	// variable we will get the hold of the variable,it is called aliasing of the fuction
	int &z=func();
	cout<<func()<<endl;
	z=39;
	cout<<func()<<endl;
	return 0;
}