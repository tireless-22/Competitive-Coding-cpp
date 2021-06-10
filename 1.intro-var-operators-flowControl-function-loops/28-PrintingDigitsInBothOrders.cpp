#include<bits/stdc++.h>
using namespace std;

// printing each digit in a number in a number using recursion
// and printing each digit IN REVERSE order  in a number using recursion

void printEachNum(int n){
	if (n==0){
		cout<<0;
		return;
	}
	int r=n%10;
	// cout<<r<<endl;
	printEachNum(n/10);
	cout<<r<<endl;
}
int main (){
	int n=3234;
	int i=0;
	while (n>0){
		cout<<n%10;
		n=n/10;
	}
	// printEachNum(n);
	return 0;
}