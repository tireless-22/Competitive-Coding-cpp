#include<bits/stdc++.h>
using namespace std;

struct stud{
	int x;
	int y;
};

int main (){

	stud s={24,342};
	stud *ptr=&s;
	// creating a pointer for structure is just like a crating a pointer to a variable


// but accessing of a structure using the pointer is some what different we have to use a arrow operator
	cout<<ptr->x;


	ptr->x=24242342;
	cout<<ptr->x;


	
	return 0;
}