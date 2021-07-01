#include<bits/stdc++.h>
using namespace std;


int main(){

	pair<int ,int > p[5];
	// array of pairs
	for (int i=0;i<5;i++){
		p[i].first=i;
		p[i].second=i*i;
	}
for (int i=0;i<5;i++){
		cout<<p[i].first;
		cout<<p[i].second<<endl;
	}
	sort(p,p+5);
	// it will defaultly sort according to the first values
	for (int i=0;i<5;i++){
		cout<<p[i].first;
		cout<<p[i].second<<endl;
	}




	int a[]={34,36,65,75,34,53,646,75674};
	int b[]={34,36,65,75,34,53,646,75674};

	pair<int,int> pa[8];
	

	for(int i=0;i<8;i++){
		pa[i]={a[i],b[i]};

	}
	sort(pa,pa+8);
	for (int i=0;i<8;i++){
		cout<<pa[i].first<<"  ";
		cout<<pa[i].second<<endl;
	}




	return 0;
}