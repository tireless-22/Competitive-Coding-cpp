#include<bits/stdc++.h>
using namespace std;
 
 //long substring with k unique characters

int main (){
	string str;
	int k,i=0,uniqueSize=0,longSize=0,finalSize=0;
	unordered_map<char,int> uoCounter;
	cin>>str>>k;
	while(i<str.size()){

		if(uniqueSize<k){
			uoCounter[str[i]]++;
			if(uoCounter[str[i]]==1){
				uniqueSize++;
				longSize++;
			}
			else{
				longSize++;
			}
			i++;
			
		}
		
		else if(uniqueSize==k){
			
			uoCounter[str[i]]++;
			if(uoCounter[str[i]]==1){
				uniqueSize++;
				longSize++;
			}
			else{
				longSize++;
			}
			i++;

		}
		else{
			uoCounter[str[i-longSize]]--;
			if(uoCounter[str[i-longSize]]==0){
				uniqueSize--;
				longSize--;

			}
			else{
				longSize--;
			}
		}
		if(longSize>finalSize){
				finalSize=longSize;
		}
		
	}
	cout<<finalSize<<"\n";
	return 0;
}