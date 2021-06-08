#include<bits/stdc++.h>
using namespace std;
int main(){



	int n=5;
	// for rows
	int m=5;
	// for colum
	int **arr;
	// created a pointer array
	arr= new int *[n];
	// creating n pointer in the array pointer arr

	for ( int i=0; i<n; i++){
		arr[i]=new int [m];
		// keeping the adress of each array of size m in n sized array pointer
	}

	for (int i=0; i<n;i++){
		for (int j=0;j<m; j++){
			arr[i][j]=i+j;
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}






	return 0;
}