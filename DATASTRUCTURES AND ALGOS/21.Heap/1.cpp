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
};

int main(){
	minHeap h(11);
	return 0;
}