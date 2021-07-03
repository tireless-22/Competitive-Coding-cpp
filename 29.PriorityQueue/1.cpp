#include<bits/stdc++.h>
using namespace std;

int main(){

	priority_queue<int> p;
	p.push(434);
	p.push(3432);
	cout<<p.top()<<endl;
	p.pop();
	cout<<p.empty()<<endl;
	cout<<p.top()<<endl;
	p.pop();
	cout<<p.empty()<<endl;

	int arr[] {3,3453,53,42};
	priority_queue<int> pp (arr,arr+4);

	vector<int> v={34,53,4535,534,23,};
	priority_queue<int> ppp(v.begin(),v.end());





	return 0;
}