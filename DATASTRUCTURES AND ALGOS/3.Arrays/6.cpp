#include<bits/stdc++.h>
using namespace std;
// largest size of subarray of of sum k
// sliding window of varialble size

int main(){
	int arr[]={4,1,1,2,1,2,5 };
	int size=sizeof(arr)/sizeof(arr[0]);
	int k=5;
	int j=0;
	int i=0;
	int sum=arr[0];
	int sizeOfSubArray=INT_MIN;
	while(j<size){
		if (sum<k){
			j++;
			sum+=arr[j];
		}
		else if(sum==k){
			if(j-i+1>sizeOfSubArray){
				sizeOfSubArray=j-i+1;
			}
			sum-=arr[i];
			i++;	
		}
		else if(sum>k){
			sum-=arr[i];
			i++;
		}
	}
	cout<<sizeOfSubArray;
	return 0;
}