#include<bits/stdc++.h>
using namespace std;


// int minCoinChange(int n,int a[]){
// 	int op1
// 	if(n>1){

// 	}

// }

int main(){
	int coins[]={1,7,10};
	int money;
	cin>>money;
	// cout<<money;

	int a[1000]={0};

	for(int i=1;i<money;i++){
		int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
		if(i>=1){
			op1=a[i-1];

		}
		if(i>=7){
			op2=a[i-7];
		}
		if(i>=10){
			op3=a[i-10];
		}

		a[i]=min({op1,op2,op3})+1;
		cout<<a[i]<<endl;


	}







	return 0;
}