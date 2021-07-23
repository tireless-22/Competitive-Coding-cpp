#include<bits/stdc++.h>
using namespace std;

struct minHeap{

	int *arr;
	int size;
	int capacity;
	minHeap(int c){
		arr=new int [c];
		size=0;
		capacity=c;
	}
	int left(int i){
		return (2*i+1);
	}
	int right(int i){
		return (2*i+2);
	}
	int parent(int i){
		return (i-1)/2;
	}


	void insert(int x){
		if (size==capacity){
			return;
		}
		size++;
		arr[size]=x;
		for (int i=size-1;i!=0 and arr[parent(i)]>arr[i];){
			swap(arr[parent(i)],arr[i]);
			i=parent(i);
			
		}	
	}
};	

int main(){
	minHeap h(11);
	return 0;
}