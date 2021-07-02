#include<bits/stdc++.h>
using namespace std;

int main(){
	forward_list<int> f={4,354,35,36,3453,543};
	auto it=f.begin();

	it=f.insert_after(it,{34,53,63,536,});
	
	for (int x :f)
		cout<<x<<endl;
	cout<<endl;


	cout<<*it<<endl;
	cout<<endl;

	it=f.erase_after(it);
	cout<<endl;
	

	for (int x :f)
		cout<<x<<endl;
	cout<<endl;

	cout<<*it<<endl;
	cout<<endl;


	it=f.erase_after(it,f.end());

	cout<<endl;
	for (int x:f)
		cout<<x<<endl;




	return 0;
}