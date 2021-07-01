#include<bits/stdc++.h>
using namespace std;


int main(){

	// creation
	pair<int,int> p;
	pair<int,string> pp;

// initializing
	pp.first=34;
	pp.second="naveen karthik";
	cout<<pp.second<<endl;



	p.first=324;
	p.second=343;
	cout<<p.first<<endl;


	// pair (data_type1, data_type2) Pair_name (value1, value2) ;
	pair<int ,char> h(43,'d');
	cout<<h.second<<endl;


// the default values are 0
	pair<int,int> k;
	cout<<k.second<<endl;
	cout<<k.first<<endl;


// MAKEPAIR
	k=make_pair(34,435);
	cout<<k.second<<endl;


	// swapping



	pair<int,int> pair1 (34,53);
	pair<int,int> pair2 (343,533);
	
	cout<<"pair1  "<<pair1.first<<" "<<pair1.second<<endl;
	cout<<"pair2  "<<pair2.first<<" "<<pair2.second<<endl;
	pair1.swap(pair2) ;
	cout<<"pair1  "<<pair1.first<<" "<<pair1.second<<endl;
	cout<<"pair2  "<<pair2.first<<" "<<pair2.second<<endl;

	return 0;
}