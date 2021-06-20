#include<bits/stdc++.h>
using namespace std;

void bnSearch(int a[],int start,int end,int target){
	if (start>end ){
		cout<<"not here";
		return;
	}	
	
	if (target ==a[(start+end)/2]){
		cout<<"element is here"<<(start+end)/2<<endl;
		return;
	}
	else if (target<a[(start+end)/2]){
		end=(start+end)/2-1;
		bnSearch(a,start,end,target);

	}
	else {
		start=(start+end)/2+1;
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