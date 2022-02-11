#include<bits/stdc++.h>
using namespace std;


int fn(string s1,string s2,int m,int n,int count){

	if(m==0 or n==0){
		return count;
	}
	else if(s1[m-1] ==s2[n-1]){
	 	return fn(s1,s2,m-1,n-1,count+1);
	}
	else{

		return max(count,max(fn(s1,s2,m-1,n,count),fn(s1,s2,m,n-1,count)));
	}

}



int main(){

	string s1,s2;

	cin>>s1>>s2;
	int m=s1.size();
	int n=s2.size();

	cout<<fn(s1,s2,m,n,0);
	return 0;



}