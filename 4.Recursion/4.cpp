#include<bits/stdc++.h>
using namespace std;

// printing the  digit in reverse order in a number using recursion


// algos using recursion
// dynamic programing 
// back tracing 
// divide and conquerer(binary search ,quick sort ,merge sort)


int recurse(int n){

	if(n<10){
		cout<<n;
		return n;
	}

	cout<<n%10;
	return recurse(n/10);
	// return is compulsary required if we are using 
	// the values of  every turn,like factorial problem
	// for this typically there is no need of return
	// but we created a funtion using return type of int
	// we can do the same fucntion without using the ruturn statement 

}


void recurses(int n){
	if (n<=0){
		return;
	}
	cout<<n%10;
	recurses(n/10);
}


int main (){
	recurses(1234);
	cout<<endl;

	recurse(1234);

	
	return 0;
}