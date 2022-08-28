#include<bits/stdc++.h>
using namespace std;



bool cmp(pair<int,int>p1,pair<int,int>p2){

	return p1.first<p2.first;
}





int main(){
	vector<int>v1={3,2,1,4,5};
	vector<int>v2={4,2,3,1,5};

	vector<pair<int,int>> vp;
	for(int i=0;i<v1.size();i++){
		vp.push_back(make_pair(v1[i],v2[i]));

	}

	sort(vp.begin(),vp.end(),cmp);


	for(int i=0;i<v1.size();i++){
		cout<<vp[i].first<<" "<<vp[i].second<<endl;

	}





	




	return 0;
}