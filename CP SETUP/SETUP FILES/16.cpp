#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;

	int row1=0,row2=a-1;
	int column1=0,column2=a-1;
	int count=1;
	vector<vector<int>> v (a,vector<int> (a,0));

	while(row1<=row2 and column1<=column2){

		for (int i=column1;i<=column2;i++){
			v[row1][i]=count;
			count++;

		}
		row1++;

		for(int i=row1;i<=row2;i++){
			v[i][column2]=count;
			count++;
		}
		column2--;


		if(row1<=row2){
			for (int i=column2;i>=column1;i--){
				v[row2][i]=count;
				count++;

			}
			row2--;


		}
		if(column1<column2){
			for (int i=row2;i>=row1;i--){
				v[i][column1]=count;
				count++;

			}
			column1++;


		}



	}

for (int i=0;i<a;i++){
	for (int j=0;j<a;j++){

		cout<<v[i][j]<<" ";
	}
	cout<<endl;
}



	
}