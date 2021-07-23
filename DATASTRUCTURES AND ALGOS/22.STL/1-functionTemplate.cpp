#include<bits/stdc++.h>
using namespace std;

template<typename t>
t arrMax(t arr[],int n){
	t res=arr[0];
	for (int i=1;i<n ;i++){
		if (arr[i]>res){
			res=arr[i];
		}

	}
	return res;
}


int main(){

	int arr[]={234,53,6,34,653};
	cout<<arrMax<int> (arr,3);
}