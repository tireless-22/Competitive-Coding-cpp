#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}
	int max_sum_row=v[0];
	int prev_sum_row=v[0];
	int present_max=v[0];
	for(int i=1;i<n;i++){
		if(prev_sum_row+max_sum_row>present_max){
			present_max=prev_sum_row+max_sum_row;
		}
		if(prev_sum_row*2+v[i]>max_sum_row){
			max_sum_row=prev_sum_row*2+v[i];
		}
		prev_sum_row=2*prev_sum_row+v[i];
	}
	cout<<present_max;
	return 0;
}