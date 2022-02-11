#include<bits/stdc++.h>
using namespace std;

void permuPractise(vector<int> nums,vector<int> ds,vector<int> freq){
	// frequency calculator is to not allow any repetitions
	if(ds.size()==nums.size()){
		for(int x:ds){
			cout<<x<<" ";

		}
		cout<<endl;
		return;
	}

	for(int i=0;i<nums.size();i++){
		if(!freq[i]){
			freq[i]=1;
			ds.push_back(nums[i]);
			permuPractise(nums,ds,freq);
			freq[i]=0;
			ds.pop_back();

		}
		

	}
	return;
}



int main(){
	vector<int> nums={1,2,3};
	vector<int> ds;
	vector<int> freq (vector<int> (nums.size(),0));

	permuPractise(nums,ds,freq);



	return 0;

}