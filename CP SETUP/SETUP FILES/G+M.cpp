#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(NULL));
	int t=rand()%10+1;
	cout<<t<<endl;

	
	while(t--){
		int n=rand()% 20+1;
		cout<<n<<" ";
		int m=rand()% 20+1;
		cout<<m<<endl;
		for (int i=0;i<n;i++){
			cout<<(rand()%5+1)<<" ";
		}
		cout<<endl;
	}





	return 0;
}