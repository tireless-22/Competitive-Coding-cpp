#include<bits/stdc++.h>
using namespace std;

void display(int mat[2][2]){
	for (int i=0;i<2;i++){
		for (int j=0; j<2;j++){
			cout<<mat[i][j]<<"  ";
		}
		cout<<endl;
	}
}




int main(){
	int mat[2][2]={32,5,45,62};
	display(mat);



	return 0;
}