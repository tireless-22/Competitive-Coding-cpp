#include<bits/stdc++.h>
using namespace std;

// function overloading


// we have give the same name to the every function that we want to overload
// overloading may be done according to types of paramenters and no of parameters
// overloading should not be done avvroding to the return type

int myMax(string x, int y){
	return 5;
}

int myMax(int x, int y){
	return (x>y)?x:y;
}

int myMax(int x, int y,int z){
	return myMax(myMax(x,y),z);
}

int main (){
	cout<<myMax(2,3)<<endl;
	cout<<myMax("helo",5)<<endl;
	cout<<myMax(2,34,5);

	
	return 0;
}