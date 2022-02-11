#include<bits/stdc++.h>
using namespace std;



int binary_search(vector<int> v,int elem,int start,int end){
	int mid=(start+end)/2;
	if(end<start){
		return -1;
	}
	if(v[mid]==elem){
		return mid;
	}

	if(elem<v[mid]){
		return binary_search(v,elem,start,mid-1);
	}
	else{
		return binary_search(v,elem,mid+1,end);
	}



}

int main(){

	vector<int> v={1,2,3,4,5,6,7};
	cout<<binary_search(v,7,0,v.size()-1);


	return 0;
}