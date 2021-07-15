#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,count=0;
	cin>>n;
	cin>>p;
	int cheker=p;
	while (n>=cheker){
		count+=n/cheker;
		cheker=cheker*p;
	}
	cout<<count;
	return 0;
}