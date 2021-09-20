#include<bits/stdc++.h>
using namespace std;
// sum of divisors using with out optimised prime alogorithm
int main(){
	int n=72;
	int totalSum=1;

	for (int i=2;i<=n;i++){
		int j=1;
		int res=1;
		cout<<i<<" "<<n<<endl;
		while(n%i==0){
			res+=(int)(pow(i,j)+0.5);
			n/=i;
			j++;
		}
		cout<<res<<endl;
		totalSum*=res;
	}
	cout<<totalSum;

	return 0;
}