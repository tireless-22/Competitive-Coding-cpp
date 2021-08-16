#include<bits/stdc++.h>
using namespace std;

// input
// xpighpilmpipi

// output
// x3.14gh3.14lm3.143.14

void replacePi(char a[],int i){
	if(a[i]=='\0' or a[i+1]=='\0'){
		// here we want two index which contains p and i
		// so there is no need for checking the last index
		// if may be the index contains contains a p then we can not
		// get i there .If i presents there it is previously checked by the 
		// previously
		return;
	}


	if(a[i]=='p' and a[i+1]=='i'){
		// as we got the match we have to replace the pi with 3.14
		// for this we have to move the elements after that to 2 imdexes forward
		int j=i+2;
		while(a[j]!='\0'){
			j++;
		}

		for (int k=j;k>=i+2;k--){
			a[k+2]=a[k];
		}
		a[i]='3';
		a[i+1]='.';
		a[i+2]='1';
		a[i+3]='4';
		replacePi(a,i+4);

	}
	else{
		// we checked wheather the present element is p
		// is present in the present index or not and i is 
		// present in the next element or not ,if any of the case
		// fails then go for the next inded
		
		replacePi(a,i+1);
	}
	return;

}


int main(){

	char a[100]="xpighpiggglmpipi";

	replacePi(a,0);
	cout<<a;
	
	return 0;
}