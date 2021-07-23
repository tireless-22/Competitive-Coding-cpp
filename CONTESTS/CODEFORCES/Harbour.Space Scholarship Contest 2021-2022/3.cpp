#include<bits/stdc++.h>
using namespace std;


bool checker(string &s1,string &s2){
	if (s1.size()*2-1<s2.size()){
		return 0;
	}
	int i1=0;
	int i2=0;
	bool flag;

	i1=s1.find(s2[0]);
	flag=true;
	
	while(flag and i2<s2.size() ){

		if(i1==s1.size()){
			i1-=2;
			flag=false;

		}
		if(s1[i1]==s2[i2] ){
			i1++;
			i2++;
		}
		else{
			i1-=2;
			flag=false;

		}
	}

	while(i2<s2.size()){
		if(i1<0){
			return 0;
		}
		if(s1[i1]==s2[i2]){
			i1--;
			i2++;
		}
		else{
			return 0;
		}
	}
	return 1;

}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		if (checker(s1,s2)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}


	}



	return 0;
}