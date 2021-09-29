#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[100000]={0};
	

	for (int i=2;i<=n;i++){
		int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
		if(i%2==0){
			op1=a[i/2];

		}
		if(i%3==0){
			op2=a[i/3];
		}
		op3=a[i-1];

		a[i]=min({op1,op2,op3})+1;
		cout<<a[i]<<endl;
	}



	return 0;
}