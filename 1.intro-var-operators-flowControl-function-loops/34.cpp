#include<bits/stdc++.h>
using namespace std;
int main (){
	int arr[]={343,5,546,434,365434,3,4};
	int size=7;
	for (int i=0;i<size-1;i++){
        for (int j=0;j<size-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
            
     }
   	for (int i=0;i<size-1;i++){
   		cout<<arr[i]<<" ";
   	}


	
	return 0;
}