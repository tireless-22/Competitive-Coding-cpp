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

Node *insetAtTheBegining(Node *head,int x){
	// we are returning the data type of Node  we have to put the pointer infront of it 
	// why because it is a pointer

	Node *temp=new Node (x);
	temp ->next=head;
	return temp;
}

Node *insetAtTheEnd(Node *head,int x){
	
	Node *temp=new Node (x);
	Node *curr=head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next=temp;
	
	return head;
}

Node *deleteStartingNode(Node *head){
	if(head==NULL){
		return NULL;
	}
	Node *temp=head->next;
	// head->next=NULL;
	delete(head);
	return temp;
}

Node *deleteAtTheEndOfTheLL(Node *head){
	if (head==NULL){
		return NULL;
	}
	if (head->next==NULL){
		return NULL;

	}

	Node *curr=head;
	while (curr->next->next!=NULL){
		curr=curr->next;
	}
	delete(curr->next);
	curr->next=NULL;

	return head;



}

int main (){

	Node *head=new Node(3);
	Node *n1=new Node(4);
	Node *n2=new Node(5);
	head->next=n1;
	n1->next=n2;
	cout<<"for insertion at the begining of the ll"<<endl;
	head=insetAtTheBegining(head,9);
	printLl(head);
	cout<<"insertion at the end of the ll"<<endl;
	head=insetAtTheEnd(head,43);
	printLl(head);
	cout<<"deletion at the begining of the ll"<<endl;
	head=deleteStartingNode(head);
	printLl(head);
	cout<<"deletion at the end of the node"<<endl;
	head=deleteAtTheEndOfTheLL(head);
	printLl(head);

	
	return 0;
}