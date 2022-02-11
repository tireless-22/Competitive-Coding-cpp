#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>v (100,vector<int>(100,0));
	// top down dp




int fn(string s1,string s2,int m,int n){
	if(n==0 or m==0){
		return v[m][n]=0;
	}
	else if(v[m][n]!=0){
		return v[m][n];
	}
	else if(s1[m-1]==s2[n-1]){
		return v[m][n]=1+fn(s1,s2,m-1,n-1);
	}
	else{
		return v[m][n]=max(fn(s1,s2,m-1,n),fn(s1,s2,m,n-1));
	}

}

int main(){



	string s1,s2;
	cin>>s1>>s2;
	int m=s1.size();
	int n=s2.size();

	fn(s1,s2,m,n);
	
	for (auto u:v){
		for (int x:u){
			cout<<x<<"  ";
		}
		cout<<endl;
	}
	cout<<v[m][n]<<endl;

	return 0;
}