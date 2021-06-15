#include<bits/stdc++.h>
using namespace std;

// spiral n logn time complexity

int main(){
	int arr []={52,46,345234,234,534};
	int len=sizeof(arr)/sizeof(arr[0]);

	sort (arr,arr+len);

	for (int i=0;i<len;i+=2){

		int temp=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=temp;
		// cout<<arr[i]<<endl;

	}

	for (int i=0;i<len;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}