#include<bits/stdc++.h>
using namespace std;


class className{
public:
	// access specifier
	// public varibales
	string x;
	string y;
	string z;


// constructor 
	className(string x,string y,string z){

		this -> x=x;
		this ->  y=y;
		this -> z=z;
	}


	void fun(){
		cout<<"this is "<<this -> x<<" "<<this -> y<<endl;
	}
};


int main(){

	// creation of object for the class
	className cls("naveen","karthik","gvp");
	className clls("vdfg","faffffffffffsf","sdfdasdf");
	// calling the method by using the object name
	cls.fun();


	// calling the method by using the object name
	clls.fun();

	



	return 0;
}