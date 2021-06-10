#include<bits/stdc++.h>
using namespace std;

struct Student{


	int x;
	int y;

// consturctor of the given structures
	// it is just like a normal method but we have
	// keep the name same as the structure
	Student(int a ,int b){
		x=a;
		y=b;

	}

	void print(){
		cout<<x <<endl<y<;
	}



};



int main (){

	Student s(43,53);
	s.print();

	
	return 0;
}