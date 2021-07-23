#include<bits/stdc++.h>
using namespace std;

struct Node{

	int data;
	Node *next;
	Node(int x){

		data=x;
		next=NULL;
	}

};

struct structClass{

	int size;
	Node *head;
	structClass(){
		size=0;
		head=NULL;
	}


	void push(int data){
		Node *temp=new Node(data);
	
		temp->next=head;
		head=temp;
		size++;

	}

	int  peak(){
		if (size==0){
			return -1;
		}
		return head->data;
	}
	int pop(){
		if (head==NULL){
			return -1;
		}
		int temp=head->data;
		Node *tempp=head->next;
		delete(head);
		head=tempp;
		size--;
		return temp;

	}
	int leng(){
		return size;
	}
	bool isEmpty(){
		return size==0;
	}

};

int main(){

	structClass s;
	s.push(4);
	s.push(5);
	s.push(6);

	cout<<"peaked element"<<s.peak()<<endl;
	cout<<"isEmpty"<<s.isEmpty()<<endl;
	cout<<"length of the queue at that time "<<s.leng()<<endl;
	cout<<"popped element"<<s.pop()<<endl;
	cout<<"popped element"<<s.pop()<<endl;
	cout<<"popped element"<<s.pop()<<endl;
	cout<<"isEmpty"<<s.isEmpty()<<endl;
	cout<<s.pop();


	return 0;
}