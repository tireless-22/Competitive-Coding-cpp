#include<bits/stdc++.h>
using namespace std;

// algoithm in stl

	// when we are using the stl algorithms
	// we have to pass the the adress only 
	// we will get the adress of the result only

int main(){
	// find in stl

	// find will give the adress of the element 
	// that we are searching for
	// if we want the index of that element we can substract form the start adress

	vector<int> v={23,543,5,563,6353,536,36,346,346};
	auto it1=find (v.begin(),v.end(),5);


	if(it1!=v.end()){
		cout<<"index is "<<it1-v.begin()<<endl<<endl;
	}


	// if we want to print that element as we only knew the adress of required element,we have to use *

	cout<<"the seartching element is"<<*it1<<endl<<endl;



	// if it is not present in this container
	// it will return the adress of the end of the container
	auto it2=find (v.begin(),v.end(),555);
	if(it2==v.end()){
		cout<<" the element you are seartching for in not present here"<<endl;
	}

	return 0;
}