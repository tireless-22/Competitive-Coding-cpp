#include<bits/stdc++.h>
using namespace std;
int main (){
	vector<vector<int>> v {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	// for (int i=0; i<v.size();i++){
	// 	for (int j=0; j<v[0].size();j++){
	// 		cout<<v[i][j]<<endl;
	// 	}
	// }
	int k=0;
	// for rows
	int l=0;
	// for colums
	// cout<<"hello";


	
	int m=v.size();
	// cout<<m;
	// total no of rows 
	int n=v[0].size();
	// cout<<n;
	// // elements in any array

	while (k<m and l<n){
		for (int i=l;i<n;i++){
			cout<<v[k][i]<<" "<<endl;

		}
		k++;


		for (int i=k;i<m;i++){
			cout<<v[i][n-1]<<" "<<endl;

		}
		n--;

		if (k<m){
			for (int i=n-1;i>=l;i--){
				cout<<v[m-1][i]<<" "<<endl;

			}
			m--;
		}

		if (l<n){
			for (int i=m-1;i>=k;i--){
				cout<<v[i][l]<<" "<<endl;

			}
			l++;
		}


	}
	





	
	return 0;
}