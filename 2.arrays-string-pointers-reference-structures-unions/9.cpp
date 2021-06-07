#include<bits/stdc++.h>
using namespace std;


void display(vector<int> &v){
	// if we did not use the reference the of 
	// vec1 as v,if will copy every thing to v
	// that will waste a lots of time and space
	// so try to use the reference while using the
	// vectors and other types
	

// this for loop is for each type
	for (auto x :v)
		cout<<x*3<<endl;
	// auto is just like a var in js
	// compiler will decide which type it is we did not need
	// to give any type before it . we can give the type manaully 
	// for vectors it is a long syntax so wee simply gave auto 



}

int main (){

	// vectors
	vector <int> vec1;
	// it is creation of vector of type int with a name vec1

	for (int i = 0; i < 100; ++i)
	{
		vec1.push_back(i);	
		// psush back is used to push the elements
		// to the vector
	}
	display(vec1);
	
	return 0;
}