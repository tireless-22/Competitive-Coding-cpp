#include<bits/stdc++.h>
using namespace std;

int maxim(int a ,int b){
	if (a>b){
		return a;

	} 
	else{
		return b;
	}
}

int main (){

	cout<<maxim(4,22);
	return 0;
}