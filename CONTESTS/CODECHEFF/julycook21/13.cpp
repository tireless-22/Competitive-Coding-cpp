#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int n ;
		cin>>n;
		vector<int> v;
		for (int i=0;i<n;i++){
			int temp;
			cin>>temp;
			v.push_back(temp);


		}
		int maxi=v[0];


		for (int x:v){
			maxi=(maxi|x);


		}

		

		int finalOP=(v[0]^maxi) ;
		
	

		for (int i=1;i<n;i++){
			int temp=(v[i]^maxi);
				
			int finalOP=finalOP or temp;	
			
		}
		cout<<maxi<<" "<<finalOP;
		
		
	

		
		
	}	

	return 0;
}