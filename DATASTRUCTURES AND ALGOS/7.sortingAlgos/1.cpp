#include<bits/stdc++.h>
using namespace std;


struct Point{
	int x;
	int y;

};

bool myCmp(int a,int b){
	return b<a;
}


int main(){

	int arr[]={234,5,36,34,34,5,3};
	sort(arr,arr+7,myCmp);

	for (int x:arr){
		cout<<x<<"\n";
	}


	return 0;
}