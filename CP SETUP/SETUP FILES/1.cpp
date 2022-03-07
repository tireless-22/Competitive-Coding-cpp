#include<bits/stdc++.h>
#define MOD 1000000007
typedef long long ll;
using namespace std;

int main(){
	
	int q;
	cin>>q;
	int ans=0;
	while(q--){
		int a,b;
		cin>>a>>b;
		int temp1,temp2;
		a++;
		b++;
		if(a==1){
			temp1=2;
		}
		else if(a%2==0){
			temp1=(pow(2,a/2)+0.5)-1;

		}
		else{
			temp1=(pow(2,a/2)+0.5)+(pow(2,a/2-1)+0.5)-1;

		}
		if(b==1){
			temp1=2;
		}
		else if(b%2==0){
			temp2=(pow(2,b/2)+0.5)-1;

		}
		else{
			temp2=(pow(2,b/2)+0.5)+(pow(2,b/2-1)+0.5)-1;

		}

		cout<<temp1<<"   "<<temp2<<endl;

		cout<<temp2-temp1<<endl;
}
	return 0;
}