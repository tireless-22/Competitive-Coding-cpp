#include<bits/stdc++.h>
using namespace std;


// every thing which is passed to a function is of type pointer we can give char 
// *someName or char someName[]. Ther is no issue in it.
void generate_subsequnce(char *ipChar ,char *opChar,int ipPointer ,int opPointer){
	if(ipChar[ipPointer]=='\0'){
		opChar[opPointer]='\0';
		cout<<opChar<<endl;
		return;
	}
	// including the present character of the input character array and we are writing present character of the input char array to the output characgter array
	opChar[opPointer]=ipChar[ipPointer];

	generate_subsequnce(ipChar,opChar,ipPointer+1,opPointer+1);

	// excluding the present charcacter of the input character array and we are rewritting the character by did not increasing the opPointer
	generate_subsequnce(ipChar,opChar,ipPointer+1,opPointer);




}


int main(){

	char ipChar[]="abcd";
	char opChar[10];
	int ipPointer=0;
	int opPointer=0;
	generate_subsequnce(ipChar,opChar,ipPointer,opPointer);




	return 0;
}