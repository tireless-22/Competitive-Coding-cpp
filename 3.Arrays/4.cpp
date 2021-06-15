#include<bits/stdc++.h>
using namespace std;

// spiral n  time complexity


void swap(int *a,int *b){

	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
	int arr []={52,46,345234,234,534,98976,8778,6,9};
	int len=sizeof(arr)/sizeof(arr[0]);


	for (int i=0;i<len;i+=2){
		// we are just making the even indexed elements 
		// bigger than the before element and after element


// code to make the before element
		// in this there is no before element if the index is at 0
		if(i>0 and arr[i]<arr[i-1]){
			swap(&arr[i],&arr[i-1]);
		}


		// if the array has odd number elements ,
		// by knowing wheather if we are last index then we have fail this condition

		if(arr[i]<arr[i+1] and i<len-1){
			swap(&arr[i],&arr[i+1]);

		}
		

	}

	// to print

	for (int i=0;i<len;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}