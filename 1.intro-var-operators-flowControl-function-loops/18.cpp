#include<bits/stdc++.h>
using namespace std;

void fun(){
	static int x=3;
	int y=4;

// here the x is static variable it will be called only one time,
	// eventhough if we called it for multiple no of times

// y is local variable ,it will be called every time ,when we call this funtion

	
	x++;
	y++;
	cout<<"x "<<x<<endl;
	cout<<"y  "<<y<<endl;


}

int main (){
	fun();
	fun();
	fun();
	return 0;
}