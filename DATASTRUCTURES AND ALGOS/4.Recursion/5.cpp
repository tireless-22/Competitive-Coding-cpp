#include<bits/stdc++.h>
using namespace std;
// printing the  digit in normal order in a number using recursion
void recurses(int n){
	if (n<=0){
		return;
	}	
	recurses(n/10);
	cout<<n%10;
}

int main (){
	recurses(1234);

	return 0;
}