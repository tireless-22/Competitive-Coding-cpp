#include<bits/stdc++.h>
using namespace std;


// given array is sorted or not


bool checkSort(int a[],int n){

	for(int i =0; i<n-1;i++){
		if (a[i]>a[i+1]){
			return 0;
		}
			}
	return 1;
}

int main (){
	int a[5]={34,34,53,113,225};
	// for(int &i :a){
	// 	cout<<i<<endl;
	// }
	int len =sizeof(a)/sizeof(a[0]);
	if (checkSort(a,len)){
		cout<<"sorted";
	}
	else{
		cout<<"not sorted";
	}
}