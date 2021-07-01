#include<bits/stdc++.h>
using namespace std;

// if we are passing the ranges we need to always pas
// begin and end+1

int main(){
	// erase in the vector

	vector<int> v={3,53,63,63,65};
	for(int x:v)
		cout<<x<<endl;
	cout<<endl;

	
	// erasing the element the from the index 0

	v.erase(v.begin());
	// v.erase(v.end());
	v.erase(v.begin()+2);


	for (int x:v)
		cout<<x<<endl;

	// deleting a group of elements

	v.insert(v.begin(),5,6);

	v.erase(v.begin()+3,v.end()-2);


	for (int x:v)
		cout<<x<<endl;

	return 0;
}