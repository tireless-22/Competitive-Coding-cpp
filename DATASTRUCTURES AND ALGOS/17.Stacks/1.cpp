#include<bits/stdc++.h>
using namespace std;


struct myStack{

	int cap;
	int top;
	int *arr;
	myStack(int x){
		cap=x;
		arr=new int [x];
		top=-1;

	}



void push(int x){
	top++;
	arr[top]=x;
}


int pop(int x){
	int temp=arr[x];
	top--;
	return temp;
}

int peek(){
	return arr[top];

}
int size(){
	return top+1;
}

bool isEmpty(){
	return (top==-1);
}

};
int main (){
	myStack s(5);
	s.push(50);
	
	


	
	return 0;
}