#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=3;
	int m=3;

	vector<int> arr[n];

	for (int i = 0; i <n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arr[i].push_back(i+j);
		}
	}

	for (int i=0; i <n; ++i){
		for (int j=0; j<m; ++j){
			cout<<arr[i][j]<< "  ";
		}
		cout<<endl;
	}







	return 0;
}