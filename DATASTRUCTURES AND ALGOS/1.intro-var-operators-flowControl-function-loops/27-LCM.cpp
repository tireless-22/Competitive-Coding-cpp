#include<bits/stdc++.h>
using namespace std;
int main (){
	int a=2;
	int b=3;
	int max=(a>b)?a:b;
	int min =(a<b)?a:b;
	for (int i=1; i<=min;i++){
		if ((max*i)%min==0){
			cout<<max*i;
			break;
		}
	}
	return 0;
}