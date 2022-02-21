/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int main(){

	
	vector<int> v={1,2,5,10,20,50,100,200,500,2000};

	int target=987;

	sort(v.begin(),v.end(),greater<int>());
	int count=0;
	int i=0;
	cout<<"checkk"<<endl;

	
	while(i<v.size()){
		cout<<target<<"  "<<i<<endl;
		
		if(target>=v[i]){
			count++;
			target-=v[i];
		}
		else{
			i++;
		}
	}

	cout<<count;


	return 0;
}


