#include<bits/stdc++.h>
using namespace std;

int checkSort(int a[],int n){
	int res=1;
	for (int i=1;i<n;i++){
		if (a[i]!=a[res-1]){
			a[res]=a[i];
			res++;

		}

	}
	return res;
}


int main (){
	int arr[] ={1,2,2,2,3,3,4,4,4,5,6};
	int len=11;
	cout<<checkSort(arr,len);
	
	return 0;
}