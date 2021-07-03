#include<bits/stdc++.h>
using namespace std;

int main(){

	forward_list<int> f1={34,};

	forward_list<int> f2={34,35,53,6,35,36,463,4534,65346};


	forward_list<int >f3;
	forward_list<int >f4;
	// push_front will add the items at the index 0
	f1.push_front(53);
	// pop_front will delete the item at the index 0
	f1.pop_front();


	// assign 
	// we can assign any new set of things or we can copy the other forward_list items
	f3.assign({235,535,346,53,463,463});
	f4.assign(f3.begin(),f3.end());

	f4.push_front(53);
	// remove will delete all the instances of a given element
	f4.remove(53);

	auto it=f1.insert_after(f1.begin(),324);
	cout<<*it;
	cout<<endl<<endl;

	it=f1.insert_after(it,{34,535,543,5});
	cout<<*it<<endl;
	cout<<endl;



	auto itt=f1.begin();
	cout<<*itt<<endl<<endl;


	// both inser_after and emplace_after will do the same function





	for (int x :f1)
		cout<<x<<endl;


	cout<<endl;

	for (int x:f4)
		cout<<x<<endl;

	return 0;
}