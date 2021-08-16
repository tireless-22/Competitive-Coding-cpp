#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	int n;
	cin>>n;
	int finalCount=0;
	while(n--){
		string s;
		cin>>s;

		for (int i=0;i<s.size();i++){
			if(i%2==0){
				if(s[i]=='T'){
					count++;	
				}
				else{
					break;
				}
				
			}
			else{
				if(s[i]=='h'){
					count++;	
				}
				else{
					break;
				}
			}
		}
		if(count>finalCount){
			finalCount=count;
		}


		
	}
	cout<<finalCount<<"\n";
	return 0;
}