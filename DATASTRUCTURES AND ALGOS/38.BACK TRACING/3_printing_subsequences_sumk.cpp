#include<bits/stdc++.h>

using namespace std;
vector<int> arr;

void printF(vector<int> arr,int n,vector<int> &ds,int target){
	if(target==0){
		// if the sum ==targter
		for(int x:ds){
			cout<<x<<" ";
		}
		cout<<endl;
		
	}

	if(n==0){
		return;	
	}

	// not pick
	printF(arr,n-1,ds,target);
	// pick

	ds.push_back(arr[n-1]);
	printF(arr,n-1,ds,target-arr[n-1]);

	// we are removing because we are using a referenced array

	ds.pop_back();


}


int main(){
	vector<int> arr={1,2,3,4,5,2};
	int n=arr.size();

	vector<int> ds;
	// ds is datastructure which will be helpful to store the elemenets

	int target=30;

	printF(arr,n,ds,target);

	return 0;
}