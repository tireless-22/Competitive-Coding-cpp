#include<bits/stdc++.h>
using namespace std;


// gcd using recursion

int recurse(int a , int b){

	if(a%b==0){
		return b;
	}
	return recurse(b,a%b);

}


int main (){
	cout<<recurse(18,27);
	
	return 0;
}