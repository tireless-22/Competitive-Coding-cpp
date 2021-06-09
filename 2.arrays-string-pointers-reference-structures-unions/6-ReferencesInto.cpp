#include<bits/stdc++.h>
using namespace std;
int main (){
	// REFERENCES

	// reference means it is not 
	// copying ,it is just like giving a
	// name to the existing variable

	// if we change the original the refrenced will change
	// and vise versa
	int x=32;
	int &y=x;
	y+=5;
	cout<<x<<endl;
	x+=2;
	cout<<y<<endl;


	
	return 0;
}