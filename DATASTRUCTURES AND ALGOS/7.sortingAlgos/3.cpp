#include<bits/stdc++.h>
using namespace std;
int main (){
	int a[] ={5,4,3};
	int len=sizeof(a)/sizeof(a[0]);

	for (int i=1;i<len;i++){
		int key=a[i];
		// here key is used the store the present element at the first while execution 
		// it will be filled with j-1 element if that is greater than a[i]
		int j=i-1;
		while(key<a[j] and j>=0){
			a[j+1]=a[j];
			j--;
		}

		a[j+1]=key;

	}

	for (int i=0;i<len;i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
}