#include<bits/stdc++.h>
using namespace std;

int main(){
	string str,t;
	cin>>str>>t;
	int count=0,i=0,j=0,smallestSubLen=INT_MAX;
	unordered_map<char,int> uoCounter;
	

	for (int i=0;i<t.size();i++){
		if(uoCounter.find(t[i])!=uoCounter.end()){
			uoCounter[t[i]]++;
		}
		else{
			uoCounter[t[i]]++;
			count++;
		}
	}
	

	while(i<str.size()){
	
		if(count!=0){
			if(uoCounter.find(str[i])==uoCounter.end()){
				i++;
			}
			else{
				uoCounter[str[i]]--;
				if(uoCounter[str[i]]==0){
					count--;
				}
				i++;
			}
		}

		if(count==0){
			if(i-j<smallestSubLen){
				smallestSubLen=i-j;
			}
			if(uoCounter.find(str[j])==uoCounter.end()){
				j++;
			}
			else{
				uoCounter[str[j]]++;
				if(uoCounter[str[j]]==1){
					count++;
				}
				j++;
			}
		}
		
	}
	cout<<smallestSubLen<<"\n";
	return 0;
}