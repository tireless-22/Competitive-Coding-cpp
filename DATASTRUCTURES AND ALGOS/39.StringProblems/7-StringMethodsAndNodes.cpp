#include<bits/stdc++.h>
using namespace std;

int main(){


// ******************************************************************************


	// find 
	// we can use this for both characters and substrings
	// we can also do with substring in the main strings
	// if present it will the position else it will return -1 or string ::npos

	// how to use

	// int pos=s.find("i");
	// int pos=s.find('i');
	// text.find( pattern, found + 1);


	// string s="thids i naveeen karthik this is why is include";

	// int pos=s.find("is");
	// if(pos==string::npos){
	// 	cout<<"hello"<<endl;
	// }
	// cout<<pos;


// ******************************************************************************


// substring()
 // if will return the sub string 
	// how to use
	// s.substr(1,3);
	// starting range and ending range

	// string s="this is naveeen karthik this is why is include";

	// string temp=s.substr(1,5);
	// cout<<temp;

// ******************************************************************************


	// size() and length() both return the length of the string 

	// how to use

	// s.size()
	// s.lenght()



 // string s="this is naveeen karthik this is why is include";

 // cout<<s.size()<<endl;
 // cout<<s.length()<<endl;

// ******************************************************************************


	// getline(cin, nameOfTheString); will take the whole line as input
	// cin>>nameOfTheString; while this will take the first word of the line



	// string s;
	// getline(cin,s);
	// // this is naveeen karthik this is why is include
	// cout<<s;

// ******************************************************************************


	// counting the substring or printing all the positions of that substring
	// using find

	// string s="this is naveeen karthik this is why is include";

	// int pos=s.find("is");
	// int countOfsubString=0;
	// while(pos!=-1){
		
	// 	countOfsubString++;
	// 	cout<<pos<<" ";
	// 	pos=s.find("is",pos+1);
	// }
	// cout<<endl<<countOfsubString;


// ******************************************************************************

	
// 	Input: string str1 = "abcd";

//        string str2 = "cbdae";

// Output: e

// Explanation: str2 contains all the element 

// of str1 with one extra alphabet 'e'.


	// string str1 = "abcd";
	// string str2 = "cbdae";

	// vector<bool> v(26,false);

	// for(char c:str1){
	// 	v[c-'a']=true;
	// }
	// for (char c:str2){
	// 	if(v[c-'a'])
	// 		v[c-'a']=false;
	// 	else
	// 		v[c-'a']=true;
	// }

	// for (int i=0;i<26;i++){
	// 	if (v[i]==true){
	// 		char tempChar='a'+i;
	// 		cout<<tempChar;
	// 	}
	// }


// ***************************************

	return 0;
}