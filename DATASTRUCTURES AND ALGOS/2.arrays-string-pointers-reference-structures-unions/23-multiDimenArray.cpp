#include<bits/stdc++.h>
using namespace std;
int main(){


	int c[2][2]={{23,2334},{23,25}}
	// usual way to do

	int c[2][2]={234,223453,25234,234}
	// we can omit the inside braces it will automatically to do by its own
	int a [][2]={234,534,534353,343};
	// we can omit the first index in the multidimensional array
	int b [][2][2]={234,534,534353,343};


	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<a[i][j]<<endl;
		}
	}

	return 0;
}