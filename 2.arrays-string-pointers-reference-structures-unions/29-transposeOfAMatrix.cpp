#include<bits/stdc++.h>
using namespace std;





int main(){
	int n=3;
	int m=3;
	int mat1[n][m]={1,2,3,4,5,6,7,8,9};
	int mat2[m][n];
	for (int i=0; i<m;i++){
		for (int j=0;j<n;j++){
			mat2[i][j]=0;

		}
	}

	for (int i=0; i<n;i++){
		for (int j=0;j<m;j++){
			mat2[j][i]=mat1[i][j];

		}
	}

	for (int i=0; i<m;i++){
		for (int j=0;j<n;j++){
			cout<<mat2[i][j]<<" ";

		}
		cout<<endl;
	}

	return 0;

}