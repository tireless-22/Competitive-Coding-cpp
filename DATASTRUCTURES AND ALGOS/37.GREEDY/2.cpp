#include<bits/stdc++.h>
using namespace std;

// activity selection using backtracing


bool cmp(pair<int,int> a ,pair<int,int> b){

	if(a.second==b.second){

		return a.first<b.first;
	}



	return a.second<b.second;
}


int main(){


	int n,a,b;

	vector<pair<int,int>> vp;

	cin>>n;

	for (int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		vp.push_back(make_pair(a,b));

	}
	sort(vp.begin(),vp.end(),cmp);





	for(int i=0;i<n;i++){

		cout<<vp[i].first<<"    "<<vp[i].second<<endl;
	}


	int res=1;
	int finishTimeOfPrevious=vp[0].second;
	for (int i=1;i<n;i++){
		if(vp[i].first>=finishTimeOfPrevious){
			finishTimeOfPrevious=vp[i].second;
			res++;

		}
	}
	cout<<"res"<<"  "<<res;
	return 0;
}