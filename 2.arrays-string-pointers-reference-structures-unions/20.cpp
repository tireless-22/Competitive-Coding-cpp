#include<bits/stdc++.h>
using namespace std;
int main (){
	int *ptr=NULL;
	// intializing the pointer to the null
	// and retriving the pointer by checking 
	// wheather it is null or not is the best practise
	int a=43;
	ptr=&a;

	if (ptr!=NULL){
		cout<<*ptr;
	}
	else{
		cout<<"helo";
	}
	
	return 0;
}