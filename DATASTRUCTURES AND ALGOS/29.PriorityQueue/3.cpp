#include<bits/stdc++.h>
using namespace std;
// sorting a array using the min heap and max heap

void sortArray(int arr[],int n){

	priority_queue<int ,vector<int>,greater<int>> p (arr,arr+n);

	for (int i=0;i<n;i++){
		arr[i]=p.top();
		cout<<p.top()<<endl;
		p.pop();
	}

}

int main(){
	int arr[]={34,4,353,6,34,3,4,66,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	sortArray(arr,9);

	return 0;
}