#include<bits/stdc++.h>
using namespace std;


int main(){

	long int t,n,x,i,j,k;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		x=n/2+(n%2);
		i=4;
		while(i<=n)
		{
		for(j=1;i*j<=n;j+=2)
		x++;
		i*=4;
	}
	printf("%ld\n",x);
}
return 0;




}