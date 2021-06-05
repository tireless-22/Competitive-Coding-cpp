#include<bits/stdc++.h>
using namespace std;


// here int is the return type of the function ,if we want to
// return a int value we have to put the int

// if we have nothing to return then use the void

// the return value type and the type before the funciton name should be
// same, if we have nothing to return then take the funcion of type void


int maxim(int a ,int b){
	if (a>b){
		return a;

	} 
	else{
		return b;
	}
}

int main (){

	cout<<maxim(4,22);
	return 0;
}