#include<bits/stdc++.h>
using namespace std;


// factorial using recursion

int recurse(int n){

	if(n==1){
		return 1;
	}
	return n*recurse(n-1);

}


int main (){
	cout<<recurse(5);
	
	return 0;
}