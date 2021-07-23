#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		if((n*m)%2!=0){
			cout<<"NO"<<"\n";
			continue;
		}

		if(k>(n*m)/2){
			cout<<"NO"<<"\n";
			continue;

		}

		int vertiCount,horiCount;
		vertiCount=m*(n/2);
		horiCount=n*(m/2);
		int totalCount=horiCount+vertiCount;
		// cout<<"hello"<<"\n";
		// cout<<n<<"  "<<m<<"  "<<totalCount<<" "<<(n*m)/2-k<<" "<<vertiCount-k<<"\n";

		if((n*m)/2==k and k==horiCount){
			cout<<"YES"<<"\n";
			continue;

		}

		if((n*m)/2-k>vertiCount-k){
			cout<<"NO"<<"\n";
			continue;


		}


		if(totalCount<=(n*m)/2){
			cout<<"NO"<<"\n";
			continue;

		}
		if(k>horiCount){
			cout<<"NO"<<"\n";
			continue;
		}
		cout<<"YES"<<"\n";




	}

	

	return 0;
}