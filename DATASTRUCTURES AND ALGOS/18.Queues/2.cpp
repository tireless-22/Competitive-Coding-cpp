#include<bits/stdc++.h>
using namespace std;


struct myStack{

	// all are at o(1)
	int *arr;
	int cap,size,front;

	myStack(int cap){
		arr=new int[cap];
		front=0;
		size=0;
	}

	void enqueue(int data){
		
		int rear=getRear();
		
		int x=(rear+1)%cap;
		arr[x]=data;
		size++;
	}
	void dequeue(){
		front=front+1;

		size--;
	}
	int getRear(){
		return front+size-1;
	}
	int getFront(){
		return front;
	}
	int getSize(){
		return size;
	}

};


int main(){
	myStack s(5);
	s.enqueue(9);
	s.enqueue(8);
	s.enqueue(7);
	s.dequeue();
	cout<<s.arr[s.getFront()]<<endl;
	cout<<s.getRear()<<endl;
	cout<<s.arr[s.getRear()]<<endl;
	cout<<s.getSize()<<endl;





	return 0;
}