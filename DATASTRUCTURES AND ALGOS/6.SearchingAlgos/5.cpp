#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l, int m ,int h){
	int n1=m-l+1;
	int n2=h-m;
	int left[n1];
	int right[n2];
	
	for (int i=0;i<n1;i++){
		left[i]=arr[l+i];

	}

	for (int i=0;i<n2;i++){
		right[i]=arr[m+1+i];

	}


	int i=0,j=0,k=l;
	while(i<n1 and j<n2){
		if(left[i]<=right[j]){
			arr[k++]=left[i++];

		}
		else{
			arr[k++]=right[j++];
		}
	}
	while(i<n1){
		arr[k++]=left[i++];
	}
	while(j<n2){
		arr[k++]=right[j++];
	}


}

void mergeSort(int arr[],int l,int r){
	if (r>l){
		int m=(r+l)/2;
		mergeSort(arr,l,m);
		mergeSort(arr,m+1,r);
		merge(arr,l,m,r);
	
	}

}




int main(){
	int arr[]={10,5,30,15,7};
	int l=0;
	int r=sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,l,r-1);

	for (int x:arr){
		cout<<x<<endl;
	}


	return 0;
}