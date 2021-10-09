#include<bits/stdc++.h>
using namespace std;


struct Node{
	Node *next;
	int data;

	Node(int x){

		data=x;
		next=NULL;

	}
};

Node *insetAtTheBegining(Node *head, int data){
	Node *curr=new Node(data);
	curr->next=head;
	return curr;
}

Node *insetAtTheEnd(Node *head,int data){
	Node *curr=new Node(data);
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;

	}

	temp->next=curr;

	return head;

}



void printNodes(Node *head){

	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}

void printN(Node *head){

	if(head==NULL){
		return;
	}
	printN(head->next);
	cout<<head->data<<endl;
	}

int search(Node *head,int x){
	while(head!=NULL){
		if(head->data==x){
			return 1;
		}

		head=head->next;

	}
	return 0;
}


int main(){
	Node *head=new Node(1);
	Node *one=new Node(2);
	Node *two=new Node(3);
	Node *three=new Node(4);
	Node *four=new Node(5);
	head->next=one;
	one->next=two;

	// printNodes(head);
	// printN(head);
	// cout<<search(head,4);
	head=insetAtTheBegining(head,89);
	printNodes(head);
	head=insetAtTheEnd(head,99);
	
	printNodes(head);

	return 0;
}