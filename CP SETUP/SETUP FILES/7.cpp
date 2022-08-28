#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[]={2,3,7,8,10};
	int size=sizeof(a)/sizeof(a[0]);
	int target=12;
	vector<vector<int>> v(size+1,vector<int>(target+1,-1));
	bool checker=false;

	for(int i=0;i<=size;i++){
		for (int j=0;j<=target;j++){
			if(i==0 or j==0){
				v[i][j]=0;
				cout<<v[i][j]<<"  ";
				if(v[i][j]==target)
					checker=true;
			}
			else if(j>=a[i-1]){
				v[i][j]=max({v[i-1][j],v[i-1][j-a[i-1]]+a[i-1]});
				cout<<v[i][j]<<"  ";
				if(v[i][j]==target)
					checker=true;
			}
			else{
				v[i][j]=v[i-1][j];
				cout<<v[i][j]<<"  ";
				if(v[i][j]==target)
					checker=true;
			}
		}
		cout<<endl;
	}
	cout<<v[size][target];
	if(checker){
		cout<<"yes";

	}
	else{
		cout<<"no";
	}


	return 0;
}