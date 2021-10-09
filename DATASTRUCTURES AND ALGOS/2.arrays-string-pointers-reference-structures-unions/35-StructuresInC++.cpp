 #include<bits/stdc++.h>
using namespace std;


// creation of structures

// in structures all the members are public by default
struct student
	{
		string name;
		int marks;
		
	};
int main(){
	
	// creating a structure reference variable
	student s;

	// creation and intializing  of structures using curly braces
	student s1={"naveen",4234};


	// we can access the members using the reference variable .member
	
	// intializing the members using the . operator
	s.marks=35;
	s.name="karthik";



	cout<<s.name;
	cout<<s.marks;

	cout<<s1.name;
	cout<<s1.marks;
	






	return 0;

}