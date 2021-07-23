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

void printLl(Node *head){
		while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
	
}


Node *reverseAList(Node *head){
	Node *prev=head;
	Node *curr=head->next;

	while(curr!=NULL){
		Node *next=curr->next;
		curr->next=NULL;
		
		curr->next=prev;
		prev=curr;
		curr=next;


	}


	return prev;
}



int main (){

	Node *head=new Node(3);
	Node *n1=new Node(4);
	Node *n2=new Node(5);
	head->next=n1;
	n1->next=n2;

	printLl(head);

	head=reverseAList(head);

	printLl(head);
	
	return 0;
}