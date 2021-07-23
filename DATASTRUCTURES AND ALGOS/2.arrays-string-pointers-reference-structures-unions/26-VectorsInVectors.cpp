#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>> vect;

	int m=3;
	int n=3;

	for (int i=0; i<n;i++){
		vector<int> v;
		for (int j=0; j<m;j++){
			v.push_back(10);
		}
		vect.push_back(v);
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout<<vect[i][j]<<"  ";
		}
		cout<<endl;
	}

	return 0;

}