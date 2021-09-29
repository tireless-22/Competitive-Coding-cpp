#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
	int i=2;
	for (i=2;i*i<=n;i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}

int main (){
	int num;
	cin>>num;

	
	for (int i=2;i<=num;i++){
		if(checkPrime(i)){
			int x=i;
			
			while(num%x==0){
				
				cout<<i<<endl;

				x=x*i;
				
			}
		}
	}
	return 0;
}