#include<bits/stdc++.h>
using namespace std;


class className{
public:
	// access specifier
	// public varibales
	string firstName;
	string lastName;
	string college;


// constructor 
	className(string x,string y,string z){

		  firstName=x;
		  lastName=y;
		  college=z;
	}


	void fun(){
		cout<<"this is "<< firstName<<" "<< lastName<<endl;
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