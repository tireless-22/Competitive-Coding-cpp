#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<pair<int,int> > v = {{1,1}, {2,2}, {3,3}};

	int size=v.size();
	for (auto x:v){
		cout<<x.1;
	}

	return 0;

}