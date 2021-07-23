#include<bits/stdc++.h>

using namespace std;


int main (){
	vector <int> v={234,5,36,345};

	v.insert(v.begin(),100);
	// we have to pass the adress ,where we wanted to insert the element


	for (int x:v)
		cout<<x<<endl;
	cout<<endl;


	v.insert(v.begin()+2,200);
	v.insert(v.end()-2,300);

	for (int x:v)
		cout<<x<<endl;
	cout<<endl;

	// if we pass the 3 parameters to the insert the 
	// the first one is the adress where we wanted to insert the item
	//second is how many times that we wanted to insert the element
	// third one is the elenent
	v.insert(v.begin()+2,5,6);
	for(int x:v)
		cout<<x<<endl;
	cout<<endl;


	// insertion of one vector in to other

	vector<int> v2={1,2,3,4,5};
	v2.insert(v2.begin()+2,v.begin(),v.end());
	for (int x:v2)
		cout<<x<<endl;

	return 0;
}