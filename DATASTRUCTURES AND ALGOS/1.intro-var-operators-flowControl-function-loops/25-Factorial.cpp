#include<bits/stdc++.h>
using namespace std;
int main (){
	int n=3;

	int i=n;
	int fact=1;
	// for ( int i=1; i<=n;i++){
	// 	fact=fact*i;

	// }
	// cout<<fact;
	while(i>0){
		fact*=i;
		i--;

	}
	cout<<fact;
	return 0;
}