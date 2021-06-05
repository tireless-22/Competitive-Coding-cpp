#include<bits/stdc++.h>
using namespace std;
int main (){
	int a=36;
	int b=48;
	int i=1;
	int temp=1;
	while(i<a and i<b){
		if (a%i==0 and b%i==0){
			temp=i;
		}		
		i++;
	}
	cout<<temp;
	return 0;
}