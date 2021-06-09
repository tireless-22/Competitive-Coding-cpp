#include<bits/stdc++.h>
using namespace std;

// array is a collection of same data type


int main (){
	cout<<"check"<<endl;


	
	int b[43];
	
    // if we only initialize the array ,
    // while the printing the array we will get
	// the garbage values
	int a[]={23,423,2324,5340};
	// if you did not give any size while intializing and declaring the 
	// array ,exactly the array will made to according the no of values we 
	// declared there,there is no empty space left
	int c[43]={343,353,34,434,343,343,5343,5343245};
	// if we initailied and decalred the array with some size which is better if we
	// want  to make changes in the array,the remaining value will be 0
	int d[5]={0};
	// if we just created a array with one variable then all the other
	//values will be 0.if we did not declared even a single a value ,then if
	//we try to print the array ,we will get the garbage values
	int e[5]={5};
	//first value will be 5 all other values will be 0


	int len=sizeof(c)/sizeof(a[0]);
	// the size of the int is 4 bytes 

	cout<<a[1]<<endl;
	cout<<sizeof(b);


	// how to access the elements in the array
	for (int i=0; i<len; i++){
		cout<<d[i]<<endl;
	}
	return 0;
}