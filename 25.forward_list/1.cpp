#include<bits/stdc++.h>
using namespace std;

int main (){
	forward_list<int > f;
	f.assign({34,4435,4,646,5});
	for (int x:f)
		cout<<x<<endl;
	cout<<endl;

	forward_list<int> ff={345,45,35,46,34,534,5};
	// this is the normal way to create the containers
	ff.push_front(435);
	// it will add the item at the starting of the forward_list
	ff.push_front(34);
	ff.pop_front();
	// it will remove the items from the front of the forward_list
	//it will delete the element at index 0
	ff.push_front(435);
	ff.remove(435);
	// it will remove all the instances in the forward_list


	for (int x:ff)
		cout<<x<<endl;
	cout<<endl;


	for(auto it=ff.begin();it!=ff.end();it++){
		// looping through iterations
		cout<<*it<<endl;
	}

	return 0;
}