#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr []={52,46,345234,234,534};
	int len=sizeof(arr)/sizeof(arr[0]);
	sort (arr,arr+len);

	for (int i=0;i<len;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}