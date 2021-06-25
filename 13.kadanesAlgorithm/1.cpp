#include<bits/stdc++.h>
using namespace std;
int main(){

	int a[]={1,-3,3,4,5,6,2,-3,2,4};


	int n=sizeof(a)/sizeof(a[0]);
	int sum =0;
	int curr_sum=0;

	for (int i=0;i<n;i++){

		if (sum<0){
			sum=0;
		}
		

		sum=sum+a[i];
		if (curr_sum<sum){
			curr_sum=sum;
		}

	}
	cout<<curr_sum;

	return 0;
}