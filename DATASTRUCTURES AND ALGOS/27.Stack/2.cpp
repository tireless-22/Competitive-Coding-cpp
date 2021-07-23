#include<bits/stdc++.h>

using namespace std;

int main(){
	int arr[]={43,53,35,43,4,33};
	stack <int> s;

	cout<<-1<<endl;

	s.push(arr[0]);

	for (int i=1;i<6;i++){
		while(s.empty()==false and s.top()<=arr[i]){
			s.pop();


		}
		int pg=(s.empty())? -1:s.top();
		cout<<pg<<endl;
		s.push(arr[i]);


	}



	return 0;
}