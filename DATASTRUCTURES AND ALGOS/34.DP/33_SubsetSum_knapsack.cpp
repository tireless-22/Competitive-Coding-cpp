#include<bits/stdc++.h>

using namespace std;

int main(){

	vector<int> v={2,3,7,8,10};
	int target=11;

	vector<vector<int>> vv(v.size()+1,vector<int>(target+1,0));
cout<<"helo"<<endl;


	for(int i=0;i<=v.size();i++){
		for(int j=0;j<=target;j++){
			if(i==0){
				vv[i][j]=0;
				cout<<vv[i][j]<<"  ";
			}
			else if(j==0){
				vv[i][j]=1;
			}

			else if(vv[i-1][j]==1){
				vv[i][j]=1;
			}
			else if(j-v[i]<0){
				vv[i][j]=0;


			}
			else if(vv[i-1][j-v[j]]){
				vv[i][j]=1;

			}
			else{
				vv[i][j]=0;
			}

		}
	}

	 cout<<vv[0][0];


	for(auto x: vv){
		for (int i:x){
			cout<<i<<"   ";

		}
		cout<<endl;
	}





	return 0;
}