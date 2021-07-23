#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	cin>>t;

	while(t--){
		int num;
		cin>>num;

		if(num%3==0){
		cout<<num/3<<" "<<num/3<<endl;
		}
		if(num%3==1){
		cout<<num/3+1<<" "<<num/3<<endl;
		}
		if(num%3==2){
		cout<<num/3<<" "<<num/3+1<<endl;
		}
		


	}





	return 0;
}