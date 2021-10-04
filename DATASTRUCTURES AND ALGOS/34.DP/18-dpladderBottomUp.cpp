#include<bits/stdc++.h>
using namespace std;





int main(){
	int n,k;
	cin>>n>>k;
	vector<int>v(n+1,0);
	v[0]=1;
	for (int i=1;i<=n;i++){
		int res=0;
		for (int j=1;j<=k;j++){		
			if(i-j>=0){
				res+=v[i-j];

			}
			v[i]=res;

		}
	}
	
	cout<<v[n];
	
	return 0;

}