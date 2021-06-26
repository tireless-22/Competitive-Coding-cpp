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

	// if (head!=NULL){
	// 	Node *curr=head;
	// 	cout<<curr->data<<endl;
	// 	curr=curr->next;
	// 	while(curr!=head){
	// 		cout<<curr->data<<endl;
	// 		curr=curr->next;
	// 	}
	// }
	if (head!=NULL){
		cout<<head->data<<endl;
		for (Node *p=head->next;p!=head;p=p->next){
			cout<<p->data<<endl;
		}
	}
	
}


int main (){

	Node *head=new Node(3);
	Node *n1=new Node(4);
	Node *n2=new Node(5);
	head->next=n1;
	n1->next=n2;
	n2->next=head;
	printLl(head);


	
	return 0;
}