#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int p;
	cin>>n;
	cin >>p;


	int fact=0;
	


	while(n!=0){


		fact=fact*n;
		n--;
	}
	cout<<fact<<endl;




	return 0;
}