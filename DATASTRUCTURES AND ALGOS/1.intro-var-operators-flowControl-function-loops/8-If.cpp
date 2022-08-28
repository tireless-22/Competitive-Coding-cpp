#include<bits/stdc++.h>
using namespace std;
int a=3433,b=133333,c=111;
int main (){
	int largest;
	// ternar operator
	largest=(a>b)&&(a>c)?a:(b>c)?b:c;
	if(a>b && a>c){
		cout<<"a is the largest number";
	}
	else if(b>c) {
		cout<<"b is the largest number"; 

	}
	else{
		cout<<"c is the largest number";
	}
	cout<<endl;
	cout<<largest;



	return 0;
}






