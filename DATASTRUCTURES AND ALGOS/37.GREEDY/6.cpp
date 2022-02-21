#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={16,17,15,0,20,1,1,2};
	int sum=0;
	for(int x:v){
		sum+=x;


	}
	cout<<sum<<endl;
	cout<<v.size()<<endl;
	cout<<sum/v.size()<<endl;


	return 0;
}