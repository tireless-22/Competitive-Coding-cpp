#include<bits/stdc++.h>
using namespace std;

// recursive funtion are easy to write
// but sometimes these have worst time and space complexity

// we can use the iteration in the place of recursion and vice versa
// so be stick to the time and space complexity


// first go to top to bottom ,
// by calling the function by decrementation of passing value
// at the bottom we have base condition 
// then return the values from bottom to top



// sum of n number in recursion
int recurse(int n){
	// base condition

	if(n==1){
		return 1;
	}
	return n+recurse(n-1);

}


int main (){
	cout<<recurse(5);
	
	return 0;
}