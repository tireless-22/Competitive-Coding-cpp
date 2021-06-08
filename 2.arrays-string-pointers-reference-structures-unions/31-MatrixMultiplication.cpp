#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=3;
	int m=3;


	vector<vector<int>> mat1 (n,vector<int> (m,2));
	vector<vector<int>> mat2 (m,vector<int> (n,3));
	vector<vector<int>> mat3 (n,vector<int> (m,0));

	for (int i=0;i<n;i++){
		for (int j=0; j<m;j++){
			for (int k=0; k<m;k++){
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}


	for (int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			cout<<mat3[i][j]<<"  ";

		}
		cout<<endl;
	}
	return 0;
}