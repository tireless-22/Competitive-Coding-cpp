#include<bits/stdc++.h>

using namespace std;

int binary_search(vector<int> v,int start,int end,float d){
	int k=(start+end)/2;
	if(start>end){
		return (v[v.size()-1]-v[start])*(v[start]-v[0]);
	}

	if(v[k]==d){
		return (v[v.size()-1]-v[k])*(v[k]-v[0]);
	}
	else if(v[k]<d){
		return binary_search(v,k+1,end,d);
	}
	else{
		return binary_search(v,start,k-1,d);
	}


}



int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;

		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			v.push_back(temp);
		}

		float d=(v[0]+v[v.size()-1])/2;

	}
	return 0;
}