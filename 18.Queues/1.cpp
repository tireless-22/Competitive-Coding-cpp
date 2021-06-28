#include<bits/stdc++.h>
using namespace std;


// normal implementation
// all o(1) only dequeue is o(n)

struct myQueue{

	int size=-1;
	int cap;
	int *arr;
	myQueue(int x){
		cap=x;
		arr=new int[cap];

	}

	void enqueue(int data){
		size++;
		arr[size]=data;


	}
	void dequeue(){
		size--;
		for(int i=0;i<size;i++){
			arr[i]=arr[i+1];
		}

	}
	int getFront(){
		return arr[size];
	}
	int getRare(){
		return arr[0];
	}


};


int main(){
	myQueue q(5);

	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.enqueue(1);
	q.enqueue(0);
	cout<<q.getRare()<<endl;
	cout<<q.getFront()<<endl;
	q.dequeue();
	q.dequeue();
	q.enqueue(7);
	cout<<q.getRare()<<endl;
	cout<<q.getFront()<<endl;



	return 0;
}