#include<bits/stdc++.h>
using namespace std;
int main (){

	// created a vector
	vector<int> v{234,3534,534,5634,634};
	// printed every element in the vector
	cout<<"printed the main vector"<<endl;
	for (int x :v)
		cout<<x<<endl;
	
	cout<<endl;

	cout<<"changed and printed"<<endl;

	// taken the vector without any reference
	// so by using this a lot of memory get wasted
	// and the changes did not reflect to the main vector
	for (int x :v){
		x +=5;
		cout<<x<<endl;
	}

	cout<<endl;
	cout<<"printed the main vector"<<endl;

	for (int x :v)
		cout<<x<<endl;


	cout<<endl;
	cout<<"changed and printed"<<endl;
	for (int &x :v){
		// here we referenced and changed the each element
		// so the changes will get reflecte  to the main vector

		x+=5;
		cout<<x<<endl;
	}

	cout<<endl;

	cout<<"printed the main vector"<<endl;
	for (int x :v)
		cout<<x<<endl;



	cout<<endl;
	cout<<"changed and printed"<<endl;
	for ( const int &x :v){
		// here we referenced and used the const keyword 
		// so we are to permitted to the change the value in the main vector
		 // we are just permittd to the read only

		
		cout<<x<<endl;
	}

	cout<<endl;

	cout<<"printed the main vector"<<endl;
	for (int x :v)
		cout<<x<<endl;
	
	return 0;
}