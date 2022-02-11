#include<bits/stdc++.h>

using namespace std;


void printF(int ind,vector<int> &ds,vector<int> arr,int n){
	if(ind==n){
		for(auto x:ds){
			cout<<x<<"  ";
		}
		cout<<endl;
		return ;
	}

	printF(ind+1,ds,arr,n);

	ds.push_back(arr[ind]);

	printF(ind+1,ds,arr,n);

	ds.pop_back();
	

	





}



int main(){

	vector<int> arr={3,1,2};
	vector<int> ds;
	int n=arr.size();




	printF(0,ds,arr,n);

	return 0;

}