#include<bits/stdc++.h>
using namespace std;

int main(){


	vector<int> v={1,4,5,6,8,9,12,343,5456};
	int len=v.size();
	int start=0;
	int end=len-1;
	int target=7;

	int ans=-1;
	int mid;

	while(start<=end){
		mid=(start+end)/2;
	

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
		cout<<"FLOOR====>  "<<"index  "<<mid<<"  floor element  "<<v[mid]<<endl;
	}


}