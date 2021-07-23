#include<bits/stdc++.h>
using namespace std;

int print(int n){
	if(n<=9){
		cout<<n;
		return 0;


	} 
	
	print(n/10);
	cout<<n%10;
	return 0;
}


int main(){
	int n=23;
	print(n);

	// while (n>0){
	// 	cout<<n%10;
	// 	n=n/10;

	// }
	// return 0;
}