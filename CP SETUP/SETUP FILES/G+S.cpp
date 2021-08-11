#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(NULL));

	int n;
	n=rand()%15+1;
	cout<<n<<endl;
	for (int i=0;i<n;i++){
		cout<<rand()%20+1<<" ";
	}




	

	return 0;
}