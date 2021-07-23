#include<bits/stdc++.h>
using namespace std;

// fibno using recursion

int recurse(int n){

	if(n==1 or n==2){
		return 1;
	}
	return recurse(n-1)+recurse(n-2);

}


int main (){
	cout<<recurse(7);
	
	return 0;
}