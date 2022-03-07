#include<bits/stdc++.h>
using namespace std;
int cnt=0;

void recursePermute(vector<int> &ds,vector<int> &nums,int freq[]){
	if(ds.size()==nums.size()){
		bool check=true;

		for(int i=0;i<nums.size();i++){
			if(i==nums[i] or ds[i]!=ds[nums[i]]){

			}		
			else{
				check=false;
				break;https://www.codingninjas.com/codestudio/problems/frog-jump_3621012?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0
			}
		}
		if(check){
			cnt++;
		}

	

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
	vector<int> nums={3,1,2,4};

	vector<int> ds;
	int freq[nums.size()]={0};
	for(int i=0;i<nums.size();i++){
		freq[i]=0;
	}
	recursePermute(ds,nums,freq);
	cout<<cnt;







	return 0;

}