#include<bits/stdc++.h>
using namespace std;

int main(){
	// lower_bound will return the element which is 
	// equal or just greater than that element


	vector<int>v={24,5,35,36,4,6,457};
	
	// if the element is not present here 
	// it will return the just greater element to that
	auto it1 =lower_bound(v.begin(),v.end(),34);
	cout<<*it1<<endl;


	// if the required element is present here
	// it will returnn the adress of that element
	auto it2=lower_bound(v.begin(),v.end(),36);
	cout<<*it2<<endl;


	// if the required is greater than all the elements in 
	// the container then it will return the end adress of the container

	auto it3=lower_bound(v.begin(),v.end(),555);
	cout<<*it3<<endl;
	if(it3==v.end()){
		cout<<" it is the end adress of the vector"<<endl;
	}






	return 0;
}