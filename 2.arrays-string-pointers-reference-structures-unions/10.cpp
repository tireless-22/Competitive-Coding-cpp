#include<bits/stdc++.h>
using namespace std;
int main (){
	vector<int> vect{22,343,534,23};

	// we did not opened the curly braces 
	// this is called short syntax in c++ we can do like 
	// for some other thing
	// int x[] {343,3324,534};
	// for (int i:x)
	// {
	// 	cout<<i<<endl;
	// }
	

	for (auto x:vect)
		cout<<x<<endl;
 
    
	for (auto x:vect){
		x+=5;
		cout<<x<<endl;
	}
	// here we did not refered to each element 
	// so the changes made in that will not reflect on the main array
	for (auto x:vect)
		cout<<x<<endl;
	for (auto &x:vect)
		x+=5;
	// here we reference the changes made in the single element 
	// get reflected to main vector
	for (auto x:vect)
		cout<<x<<endl;

	
	return 0;
}