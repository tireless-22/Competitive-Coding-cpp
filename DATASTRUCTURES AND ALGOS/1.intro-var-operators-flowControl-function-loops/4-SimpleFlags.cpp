//escape sequences

// FLAGS IN C++

#include<bits/stdc++.h>
using namespace std;
int main (){




	int hexad=0x23;
	// here we gave the integer in hexa decimal form but while printing
	// but while prnting it is in the form of dec,in order to print any number
	// in other forms like hexa or octa we need to use the flags

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
	// here oct is a flag used ,inorder to print the 
	//the given integer of any form in the octal form 
	cout<<a<<endl;
	cout<<hex;
	cout<<a<<endl;


	return 0;
}