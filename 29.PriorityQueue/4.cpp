#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int > v{35,56,324,36,23,5,3,5,423};
	priority_queue<int,vector<int>,greater<int>> p(v.begin(),v.end());
	for (int i=0;i<v.size();i++){
		cout<<p.top()<<endl;
		p.pop();
	}



	return 0;
}