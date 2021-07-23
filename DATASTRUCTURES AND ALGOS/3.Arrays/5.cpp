#include<bits/stdc++.h>
using namespace std;
int main (){
	// spiral

	// it is setting the 4 pointer 
	// first pointer is at the starting index of the row which is 0
	// second one is at the starting incex of the column which is 0
	// third one is at the end of the row
	// fourth is at the end of the column


	vector<vector<int>> v {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	
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

		// here k is the starting index of the row
		// as we one completed printing the first row
		// we never require the row so after the 
		// printing of top row just increment the k
		for (int i=l;i<n;i++){
			cout<<v[k][i]<<" "<<endl;

		}
		k++;

		// after printing the right side column ,then 
		// decrease the column size which is n 

		for (int i=k;i<m;i++){
			cout<<v[i][n-1]<<" "<<endl;

		}
		n--;

		// why we are keeping  the if statements for the bottom row and left side colummn is
		// if the matrix has odd no of colums or rows then only we can print the top row and right column
		// inoorder to check iif the rows and columns has odd no of elements we will check

		if (k<m){


			// after decreasing the down columns
			// decrease the max row length which is m
			for (int i=n-1;i>=l;i--){
				cout<<v[m-1][i]<<" "<<endl;

			}
			m--;
		}

		if (l<n){
			// after printing the left side column 
			// incremment the value of l
			for (int i=m-1;i>=k;i--){
				cout<<v[i][l]<<" "<<endl;

			}
			l++;
		}


	}
		
	return 0;
}