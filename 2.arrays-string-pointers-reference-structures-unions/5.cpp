#include<bits/stdc++.h>
using namespace std;

// counting the unique values in a array


int main (){
	int a[]={1,3,4,3,2,3,6,7,1};
	int len =sizeof(a)/4;
	int counter=1;
	for (int i=1;i<len;i++){
		bool checker=false;
		for (int j=i-1;j>=0;j--){
			if (a[i]==a[j]){
				checker=true;
				break;
			}
		}
		if (checker==false){
			counter++;
		}
	}
	cout<<counter;	
	return 0;
}