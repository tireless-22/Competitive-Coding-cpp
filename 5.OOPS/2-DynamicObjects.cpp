#include<bits/stdc++.h>
using namespace std;

class className{
public:
	int x;
	int y;
};


int main (){
	className *c=new className;
	// we created a pointer objject here

	// pointer variables can be accesed by using the arrow operator

	c->x=35;
	cout<<c->x;


	// or as like we do in normal variable using by using a fullstop ,
	// in this pointer variable by dereferncing the we can do as normal variable

	(*c).x=343;
	cout<<endl<<(*c).x;


	return 0;
}