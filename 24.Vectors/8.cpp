#include<bits/stdc++.h>
using namespace std;

vector<int> smallerValues(vector<int> a,int data){
	vector<int> v;

	for (int x:a){
		if(x<data){
			v.push_back(x);
		}
	}
	return v;
}
int main(){
	vector<int> v={34,5,36,47,47,3453,56,6};
	vector<int> vv;
	vv=smallerValues(v,10);
	for (int x:vv)
		cout<<x<<endl;
	return 0;
}