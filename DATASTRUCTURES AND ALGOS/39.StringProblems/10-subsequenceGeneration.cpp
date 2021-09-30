#include<bits/stdc++.h>
using namespace std;

// it is generation of subsequences using the string totaly ,so we can not use 
// indexed type of thing here 

// by use this type of method we can not print the sub sequences in the order
// this will print in the reverse order


// we are calling the excluding the present character of the input string at first
// and we are calling the including the character at the next

// if we call the including the present character of the input string at first,
// then the order will be maintained properly
// we will do this in the next code using the character array inorder to use the indexed type of thing





void generate_subsequnce(string s1,string s2,int ipPointer){

	if(s1[ipPointer]=='\0'){
		
		// s2[opPointer]='\0';
		// cout<<"hello"<<endl;
		cout<<s2<<"\n";
		// cout<<"hello "<<endl;
		return;
	}


	// exclude the present character 

	// we did not wrote anything to the output string ,that is why 
	// we did not passed incremented op index
	generate_subsequnce(s1,s2,ipPointer+1);

	// including the present character


	s2+=s1[ipPointer];
	// cout<<s2<<endl;
	// we wrote the present character of input string to the output 
	// string,that is why we passed the incremented op index
	generate_subsequnce(s1,s2,ipPointer+1);


	
}





int main(){
	string s1="abcd";
	string s2="";
	int ipPointer=0;
	int opPointer=0;

	// s2[opPointer]=s1[ipPointer];
	// cout<<s2+<<endl;

	generate_subsequnce(s1,s2,ipPointer);




	return 0;
}