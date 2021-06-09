#include<bits/stdc++.h>
using namespace std;

int fun1(int x){
// this is valid it is just like sending the values 
// to one function to another function

	cout<<x<<endl;
	return 0;	
}

int fun2(int &x){
	// we used sinle ampersand which means l type values but it 
	// will not take the variables it is show compile time error
	

	cout<<x<<endl;
	return 0;	
}

int fun3(int &&x){
	// here we used double ampersand means r type reference so it is valid 
	// for values to ,we can modify the variable too

	

	cout<<x<<endl;
	return 0;	
}

int fun4(const int &x){
	// here we used the const reference it will take the values as a reference 
	// but we are not allowed to change those values
	

	cout<<x<<endl;
	return 0;	
}

int main (){
	fun1(34);
	// fun2(34);
	fun3(34);
	fun4(34);


	return 0;
}