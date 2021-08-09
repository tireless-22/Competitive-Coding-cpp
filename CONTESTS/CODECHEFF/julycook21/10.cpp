#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a ,b,c;
		cin>>a>>b>>c;

		bool check1=false;
		bool check2=false;

		if(a==0 or b==0 or c==0){
			check1=true;

		}
if(a==1 or b==1 or c==1){
			check2=true;

		}

		if (check1 and check2){
			cout<<1<<"\n";
		}
		else{
			cout<<0<<"\n";
		}


	}






	return 0;
}