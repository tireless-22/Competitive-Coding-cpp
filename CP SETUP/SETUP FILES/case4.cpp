#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(NULL));
	int t=rand()%10000+1;
	cout<<t<<endl;

	
	while(t--){
		int n=rand()% 100000+1;
		if(n%2==0){
			n=n+1;
		}
		cout<<n<<" ";
		int m=rand()% 15;
		cout<<m;
		
		cout<<endl;
	}





	return 0;
}