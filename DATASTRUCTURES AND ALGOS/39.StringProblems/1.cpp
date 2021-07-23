#include<bits/stdc++.h>
using namespace std;
// anagram count in a string

int main(){

	string s="abaaababaa";
	string ptr="aaba";
	int count=0;
	int final_res=0;


	unordered_map<char,int> uo;

	// for the anagram disntinct element count and each count in unorderd map
	for (int i=0;i<ptr.size();i++){
		if(uo.find(ptr[i])==uo.end()){
			count++;
			
		}
		uo[ptr[i]]++;
	}

	for (int i=0;i<s.size();i++){
		if (i<ptr.size()){
			if(uo.find(s[i])!=uo.end()){

				uo[s[i]]--;
				if (uo[s[i]]==0){
					count--;
					
				}
			}
		}
		
		else{
			if(uo.find(s[i-ptr.size()])!=uo.end()){
				uo[s[i-ptr.size()]]++;
				if(uo[s[i-ptr.size()]]==1){
					count++;
					
				}
			}
			if(uo.find(s[i])!=uo.end()){
				uo[s[i]]--;
				if(uo[s[i]]==0){
					count--;
					// cout<<"checker2"<<count<<endl;

				}
			}

		}
		if(count==0){
			cout<<"checker"<<i<<endl;
			final_res+=1;
		}

	}
	cout<<final_res;





	return 0;
}