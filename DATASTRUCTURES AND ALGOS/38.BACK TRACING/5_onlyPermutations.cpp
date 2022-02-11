#include<bits/stdc++.h>
using namespace std;

void recursePermute(vector<int> &ds,vector<int> &nums,int freq[]){
	if(ds.size()==nums.size()){
		for(int x:ds){
			cout<<x<<" ";
		}
		cout<<endl;

	}
	for(int i=0;i<nums.size();i++){
		if(!freq[i]){
			ds.push_back(nums[i]);
			freq[i]=1;
			recursePermute(ds,nums,freq);
			freq[i]=0;
			ds.pop_back();
		}
	}
}



int main(){
	vector<int> nums={1,2,3};

	vector<int> ds;
	int freq[nums.size()]={0};
	for(int i=0;i<nums.size();i++){
		freq[i]=0;
	}
	recursePermute(ds,nums,freq);







	return 0;

}