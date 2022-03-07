#include<bits/stdc++.h>
using namespace std;

int main(){


	vector<int> v={0,1,2,3,4,5,6};
	int len=v.size();
	int start=0;
	int end=len-1;
	int target=2;

	int ans=-1;

	while(start<=end){
		int mid=(start+end)/2;

		if(v[mid]==target){
			ans=mid;
			
			break;
		}
		else if(v[mid]>target){
			end=mid-1;

		}
		else{
			start=mid+1;
		}

	}
	if(ans==-1){
		cout<<"no answer found";
	}

	else{
		cout<<ans;
	}


}