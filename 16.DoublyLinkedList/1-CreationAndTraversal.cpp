#include <bits/stdc++.h>
using namespace std;


struct Node {
	int data;
	Node *prev;
	Node *next;
	Node (int x ){
		data=x;
		prev=NULL;
		next=NULL;
	}
};


void printdl(Node *head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}

}


 

int main(){

	

	Node *head=new Node(1);
	Node *n1=new Node(2);
	Node *n2=new Node(3);
	Node *n3=new Node(4);
	Node *n4=new Node(5);
	Node *n5=new Node(6);
	Node *n6=new Node(7);
	head->next=n1;
	n1->prev=head;
	n1->next=n2;
	n2->prev=n1;
	n2->next=n3;
	n3->prev=n2;
	n3->next=n4;
	n4->prev=n3;
	n4->next=n5;
	n5->prev=n4;
	n5->next=n6;
	n6->prev=n5;


	printdl(head);



	return 0;
} 