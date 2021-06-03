//escape sequences

// FLAGS IN C++

#include<bits/stdc++.h>
using namespace std;
int main (){




	int hexad=0x23;
	cout<<hexad<<endl;

	// if we started a flag in a block
	// this will will applied to the end of the block
	cout<<showbase;
	// showbase is a block which will print the base of the integer
	// which is ocatal,hexa ,binary or dec
	int a=35,b=34;
	cout<<a<<endl;
	// this is a flag which make us print the normal integer in octal form
	cout<<oct;
	cout<<a<<endl;
	cout<<hex;
	cout<<a<<endl;


	return 0;
}