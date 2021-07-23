#include <bits/stdc++.h>
using namespace std ;

int main (){
	forward_list<int> f={34,5,35,35,3,3};


	f.reverse();


	for(int x :f){
		cout<<x<<endl;
	}

	f.sort();

	cout<<endl;
	for (int x:f)
		cout<<x<<endl;

	forward_list<int>f1={345,43,5,35,3653,};


	f.merge(f1);


	cout<<endl;

	for (int x :f)
		cout<<x<<endl;

	cout<<endl;
	cout<<f1.empty()<<endl;
	cout<<f.empty()<<endl;
	f.clear();
	cout<<f.empty();



	return 0;
}