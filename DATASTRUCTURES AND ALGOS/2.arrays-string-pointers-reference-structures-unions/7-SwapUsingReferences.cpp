#include<bits/stdc++.h>
using namespace std;


// void swap(int x,int y){
// 	// here this is normal function
// 	// changes that are made here are not get reflected 
// 	// even though we use the same variable or different variable
// 	int temp=y;
// 	y=x*2;
// 	x=temp*2;
// }


void swap(int &r,int &t){

	// here we referenced the x with r and y with t
	// we can also reference the x with x and y with y
	// so the changes made in this method get reflected to the x and y
	int temp=t;
	t=r;
	r=temp;
}
int main (){
	int x=3;
	int y=34;
	swap(x,y);
	cout<<x<<" "<<y;
	return 0;
}