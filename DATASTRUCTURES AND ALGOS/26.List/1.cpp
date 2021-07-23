#include<bits/stdc++.h>
using namespace std;
int main(){
	list<int> l={33,5,636,35,56,35,34};

	// push and pop operations

	l.push_back(111);
	l.push_front(222);
	l.pop_back();
	l.pop_front();

	// pointer at the starting value

	auto it=l.begin();

	it++;
	cout<<*it<<endl<<endl;

	it=l.insert(it,{435,5,35,53,5,35});
	for (int x:l)
		cout<<x<<endl;
	cout<<endl;
	cout<<*it<<endl<<endl;

	return 0;
}