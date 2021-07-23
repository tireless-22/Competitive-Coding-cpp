#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	int num;
	cin>>t;

	for(int i=0;i<t;i++){
		cin>>num;
		if(num%10==9){
			cout<<num/10+1<<"\n";
		}
		else{
		cout<<num/10<<"\n";
		}
	}


	return 0;
}