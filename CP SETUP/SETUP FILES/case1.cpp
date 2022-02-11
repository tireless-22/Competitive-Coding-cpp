#include<bits/stdc++.h>
using namespace std;

int main(){
	
	srand(time(NULL));
	int t=rand()%1000+1;
	cout<<t<<endl;

	
	while(t--){
		int n=rand()% 10000+1;
		cout<<n<<endl;
	
		for (int i=0;i<n;i++){
			cout<<(rand()%10000+1)<<" ";
		}
		cout<<endl;
	}





	return 0;
}