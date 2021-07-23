#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1="hello this is knk,is present is a is";
	string s2="is";

	// find return -1 if nothing found

	int found= s1.find("is");
	while(found!=-1){
		cout<<"strind found at index  "<<found<<endl;
		found=s1.find("is",found+1);
	}
	



	return 0;
}