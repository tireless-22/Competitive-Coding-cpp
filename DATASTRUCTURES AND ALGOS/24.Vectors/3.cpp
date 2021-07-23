#include<bits/stdc++.h>

using namespace std;


int main (){
	// push_back just like append
	//v.size() for checking the size


	// using iterators

	vector<int> v(6,3);

	// begin() will return the adress fist element
	// end will give the adress of end+1 adress

	// these iterators can be used like pointers

	for (auto it=v.begin();it!=v.end();it++){
		// iterators are adress,we have to pass the adress to the algos
		cout<<*it<<endl;

	}




	// creating vector from arrays

	int arr[]={35,3645,64,346,34};
	int n=sizeof(arr)/sizeof(arr[0]);

	vector <int > vv(arr,arr+n);
	for (int x :vv)
		cout<<x<<endl;




// if the vector has 5 elements
	// vv.begin();
	// it will give the adress of index 0


	// vv.end();
	// it will give the adress of index 5
	// which is not present in the vector
	// it is immediate adress after the vector
	
	// vv.rbegin();
	// it will give the adress of index 4

	// vv.rend();
	// it will give the adress before the index 0
	// which is not present in the vector



	return 0;
}