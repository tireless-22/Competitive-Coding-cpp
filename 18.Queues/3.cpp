#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};

struct myQueue{
	Node *rear;
	Node *front;

	myQueue(){
		rear=NULL;
		front=NULL;
	}
	void enqueue(int data){
		Node *temp=new Node(data);
		if(front==NULL){
			rear=front=temp;
		}
		else{
			front->next=temp;
			front=temp;
		}
	}

	void dequeue(){
		if (rear==NULL){
			return;
		}
		Node *temp=rear;
		rear=rear->next;
		if (rear==NULL){
			front=NULL;
		}
		delete(temp);

	}

};



int main(){
	myQueue q;
	q.enqueue(434);
	q.enqueue(4342);
	q.enqueue(43411);
	cout<<q.rear->data<<endl;
	cout<<q.front->data<<endl;




	return 0;
}