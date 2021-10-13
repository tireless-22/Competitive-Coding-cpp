#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	 s="hello this is knk";
	 int start=0;
	 int space=s.find(" ");

	 while(space!=-1){
	 	reverse(s.begin()+start,s.begin()+space);
	 	start=space+1;
	 	space=s.find(" ",space+1);
	 }
	 

	 cout<<s;




	return 0;
	
}