#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(NULL));

	// 2
	// 8
	// 15 1 10 5 19 19 3 5 
	// 6
	// 6 2 8 2 12 16 

	// int t=rand()%10+1;
	// cout<<t<<endl;
	// while(t--){
	// 	int n=rand()% 20+1;
	// 	cout<<n<<endl;
	// 	for (int i=0;i<n;i++){
	// 		cout<<(rand()%20+1)<<" ";
	// 	}
	// 	cout<<endl;
	// }




	int t=rand()%10+1;
	cout<<t<<endl;
	while(t--){
		int n=rand()% 10+1;
		cout<<n<<endl;
		for (int i=0;i<n;i++){
			cout<<(rand()%11+-5)<<" ";
		}
		cout<<endl;
	}


	return 0;
}