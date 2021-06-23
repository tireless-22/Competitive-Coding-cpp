#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int left,int right,int target){


	while(left<right){
		int mid=(left +right)/2;
	if (a[mid]==target){
		return mid;

	}
	else if(a[mid]<target){
		left=mid+1;
	}
	else{
		right=mid-1;
	}


	}
	return -1;
}


int main(){


	int a []={1,2,3,4,5,6,7,8,9,10,11};
	int target=4;

	int left=0;
	int right =sizeof(a)/sizeof(a[0])-1;
	cout<<binarySearch(a,left,right,target);





	return 0;
}