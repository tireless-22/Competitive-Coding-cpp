#include<bits/stdc++.h>

using namespace std;


int main (){
	vector <int> v={234,5,36,345};

	v.pop_back();
	// it will delete the last element

	for (int x:v)
		cout<<x<<endl;

	v.front()=353;
	// we can modify the first and last elements very easily	v.back()=35;


	cout<<endl;
	cout<<v.front()<<endl;
	// it will return the first element in the vector

	cout<<v.back()<<endl;
	// it will return the last element in the vector


	return 0;
}