#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b,c;
	unordered_map<int,int > counter;
	while (n--){
		cin>>a>>b>>c;
		counter[a]++;
		counter[b]++;
		counter[c]++;
	}
	int thresh;
	cin>>thresh;
	vector<pair<int,int>> vp={counter.begin(),counter.end()};
	priority_queue<int,vector<int>,greater<int>> s;
	int k=0;
	for (int it=0;it<vp.size();it++){
		if(vp[it].second>thresh){
			k++;
			s.push(vp[it].first);
		}
	}
	for (int i=0;i<k;i++){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}