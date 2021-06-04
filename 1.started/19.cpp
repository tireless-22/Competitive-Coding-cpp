#include<bits/stdc++.h>
using namespace std;

void fun(int x){
	if (x==0){
		return;
	}
	else {
		cout<<"knk"<<endl;
		return fun(x-1);

	}
}


int main (){
	fun(5);
	
	return 0;
}