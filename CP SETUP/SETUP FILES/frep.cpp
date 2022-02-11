#include<bits/stdc++.h>
#include<stdio.h>
main()
{
	long int t,q,d;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld %ld",&d,&q);
		if(q<=8)
		printf("%ld\n",d-1);
		else if(q==9)
		printf("%ld\n",d);
		else
		printf("%ld\n",d-2);
	}
	return 0;
}