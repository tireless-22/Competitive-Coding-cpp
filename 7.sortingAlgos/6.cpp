#include<bits/stdc++.h>
using namespace std;


// lumuto
void swap(int &x ,int &y){

	int temp=x;
	x=y;
	y=temp;
}



int main(){
	int a[]={10,5,30,15,11,12,111};
	int l=0;
	int i=l;
	int j=-1;
	int h=sizeof(a)/sizeof(a[0]);

	for (int i=l;i<h-1;i++){
		if (a[i]<a[h-1]){
			j++;
			swap(a[i],a[j]);
			
		}
	}
	j++;
	swap(a[h-1],a[j]);
	for (int x:a){
		cout<<x<<endl;
	}



	return 0;
}