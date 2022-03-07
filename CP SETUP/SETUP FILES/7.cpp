#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int ans=0;
	while(t--){


		int a;
		int b;
		int x;
		cin>>x>>a>>b;
		bool check=false;

		int maxx;
		int minn;

		if(a>=b){
			maxx=a;
			minn=b;
		}
		else{
			maxx=b;
			minn=a;
		}

		int minn=min;
		int r1=x%max;
		int r2=x%min;
		

		// while(min<max){
		// 	if(r1%(max-min)==0 or r2%(max-min)==0){
		// 		check=true;

		// 		break;
		// 	}
		// 	min+=minn;
		// }

		
		cout<<check<<endl;


	}


	

	



	return 0;
}