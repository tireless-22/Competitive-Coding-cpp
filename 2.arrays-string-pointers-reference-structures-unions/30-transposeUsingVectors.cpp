#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	// no of rows
	int m;
	cin>>m;
	// no of columns


	// vector<int> k (4,5);
	// // first element 4 indicates no of rows and second one indicates defayult value
	// for (auto x: k)
	// 	cout<<x<<"  ";


	vector<vector<int>> mat1 (n,vector<int> (m,0));
	vector<vector<int>> mat2 (m,vector<int> (n,0));



	// taking the inputs to the first matrix

	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int temp;
			cin>>temp;
			mat1[i][j]=temp;
		}
	}


// printing  the value in the mat1 for checking purpose
	for (int i=0 ; i<n;i++){
		for (int j=0; j<m ;j++){
			cout<<mat1[i][j]<<" ";

		}
		cout<<endl;
	}




	// giving the values from the mat1 to mat2

	for (int i=0; i<n ;i++){
		for (int j=0;j<m ;j ++){
			mat2[j][i]=mat1[i][j];

		}
	}

	cout<<endl<<endl;

// printing the values in the second array
	for (int i=0 ; i<m;i++){
		for (int j=0; j<n ;j++){
			cout<<mat2[i][j]<<" ";

		}
		cout<<endl;
	}

	return 0;

}