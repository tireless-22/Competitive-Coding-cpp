#include<bits/stdc++.h>
using namespace std;

void bnSearch(int a[],int start,int end,int target){
	if (start>end ){
		cout<<"not here";
		return;
	}
	int mid=(start+end)/2;	
	
	if (target ==a[mid]){
		cout<<"element is here"<<mid/2<<endl;
		return;
	}
	else if (target<a[mid]){
		end=mid-1;
		bnSearch(a,start,end,target);

	}
	else {
		start=mid+1;
		bnSearch(a,start,end,target);

	}
	return;
}


int main (){
	int a[]={1,2,3,4,5,6,7,8,9,10,11};
	int target=2;
	int end=sizeof(a)/sizeof(a[0]);
	int start=0;
	bnSearch(a,start,end-1,target);

	
	return 0;
}