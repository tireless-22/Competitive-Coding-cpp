#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,3,4,5,6,7,4,3,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	int k=4;
	int res=0;
	int curr_sum=0;
	for(int i=0;i<n;i++){
		if(i<k){
			res+=a[i];
			curr_sum=res;	
		}
		else{
		curr_sum=curr_sum +a[i]-a[i-k];
		res=max(curr_sum,res);
		}
	}
cout<<res;
	return 0;
}