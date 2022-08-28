#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> p1,pair<int,int> p2){
	if(p1.second==p2.second){
		return p1.first<p2.first;
	}


	return p1.second<p2.second;
}




int main(){
	vector<pair<int,int>> vp;
	vector <int > rollNo={107,109,103,104,107,105,103};
	vector<int> marks={92,23,4,53,23,45,23};

	for(int i=0;i<rollNo.size();i++){
		vp.push_back(make_pair(rollNo[i],marks[i]));
	}

	for(int i=0;i<rollNo.size();i++){
		cout<<vp[i].first<<"  "<<vp[i].second<<endl;
	}

	sort(vp.begin(),vp.end(),cmp);
	cout<<endl<<endl;

	for(int i=0;i<rollNo.size();i++){
		cout<<vp[i].first<<"  "<<vp[i].second<<endl;
	}


	return 0;
}