#include<bits/stdc++.h>
using namespace std;
int main(){

// 2 SUM
	
	int a[]={1,2,3,4,5,6,7,8,9};
	int target=7;
	int n=sizeof(a)/sizeof(a[0]);

	int x=0;
	int y=n-1;
	while(x<y){
		if (a[x]+a[y]>target){
			y--;
		}
		else if (a[x]+a[y]<target){
			x++;
		}
		else{
			cout<<x<<" "<<y<<endl;
			x++;
			y--;
		}
	}



	return 0;
}