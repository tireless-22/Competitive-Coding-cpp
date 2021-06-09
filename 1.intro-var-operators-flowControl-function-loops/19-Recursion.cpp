#include<bits/stdc++.h>
using namespace std;


// if the given fuction has a return type of void,
// if we want to get out of that function then we need to
// type return;

// it is a simple example of recursion

void fun(int x){
	if (x==0){
		// base case
		return;
	}
	else {
		cout<<"knk"<<endl;
		return fun(x-1);

	}
}


int main (){
	fun(5);
	
	return 0;
}