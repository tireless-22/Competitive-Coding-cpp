#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;

}


int main(){

	int a[]={0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,0,1,2,0};

	int n=sizeof(a)/sizeof(a[0]);

	int low=0;
	int mid=0;
	int high=sizeof(a)/sizeof(a[0])-1;

	while(mid!=high){
		if (a[mid]==0){
			swap(a[low],a[mid]);
			low++;
			mid++;
		}
		else if (a[mid]==1){
			mid++;
			
		}
		else{
			swap(a[mid],a[high]);
			high--;


		}

		}


	for (int x:a){
		cout<<x;
	}


	return 0;

}
