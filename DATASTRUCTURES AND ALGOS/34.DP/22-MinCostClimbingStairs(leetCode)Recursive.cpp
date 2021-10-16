#include<bits/stdc++.h>
using namespace std;


int mini(vector<int> v,int n){
	if(n==0 or n==1){
		return 0;
	}


	int firstMin=mini(v,n-1)+v[n-1];
	int secondMin=mini(v,n-2)+v[n-2];

	return min({firstMin,secondMin});

}

int main(){

	vector<int> v={1,100,1,1,1,100,1,1,100,1};
	int n=v.size();

	cout<<mini(v,n);






	return 0;
}