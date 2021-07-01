#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> p1,pair<int,int>p2){
	if(p1.second==p2.second){
		return p1.first<p2.first;
	}
	return p1.second>p2.second;
}


int main(){
	vector<pair<int,int>> p;

	vector <int > rollNo={107,109,103,104,107,105,103};
	vector<int> marks={92,23,4,53,23,45,23};

	for (int i=0;i<rollNo.size();i++){
		p.push_back({rollNo[i],marks[i]});
	}

	sort(p.begin(),p.end(),cmp);


	for (int i=0;i<p.size();i++){
		cout<<p[i].first<<"  "<<p[i].second<<endl;
	}



	return 0;
}