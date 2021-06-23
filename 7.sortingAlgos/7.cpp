#include<bits/stdc++.h>
using namespace std;


// l
void swap(int &x ,int &y){

	int temp=x;
	x=y;
	y=temp;
}



int main(){
	int a[]={1,34,34,3,5333};
	
	int l=0;
	int p=a[0];
	int r=sizeof(a)/sizeof(a[0])-1;
	while(l<r){



		while(a[l]<p){
			l++;
		}
		while(a[r]>p){
			r--;
		}
		swap(a[l],a[r]);
		

	}
	for (int x:a){
		cout<<x<<endl;
	}





	return 0;
}