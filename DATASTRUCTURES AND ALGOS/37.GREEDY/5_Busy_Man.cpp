#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> p1,pair<int,int> p2){
		return p2.second>p1.second;
	}

int main(){

	vector<pair<int,int>> vp;

	vector<int> v1={7,0,4,8,4,5};
	vector<int> v2={9,10,5,9,10,7};
	int count=0;

	for(int i=0;i<v1.size();i++){
		vp.push_back(make_pair(v1[i],v2[i]));
	}
	
	sort(vp.begin(),vp.end(),cmp);

	int prevEnd=-1;
	for(auto x:vp){
		if(x.first>=prevEnd){
			count++;
			prevEnd=x.second;
		}

	}
	cout<<count;

	return 0;
}