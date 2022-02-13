#include<bits/stdc++.h>
using namespace std;

void recurse(vector<int> nums,vector<int> ds){
	if(ds.size()==nums.size()){
		for( auto i:ds){
			cout<<i<<"  ";
		}
		cout<<endl;
		return;
	}

	for(int x:nums){
		ds.push_back(x);
		recurse(nums,ds);
		ds.pop_back();
	}
	return;
}


int main(){
	vector<int> nums={1,2,3};
	vector<int> ds;

	recurse(nums,ds);

	return 0;

}