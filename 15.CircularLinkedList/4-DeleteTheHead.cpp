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


	if (head!=NULL){
		cout<<head->data<<endl;
		for (Node *p=head->next;p!=head;p=p->next){
			cout<<p->data<<endl;
		}
	}
	
}

Node *deleteHead(Node *head){
	if (head==NULL or head->next==NULL){
		return NULL;
	}
	Node *temp=head->next->next;
	head->data=head->next->data;
	
	delete(head->next);
	head->next=temp;
	return head;
}





int main (){

	Node *head=new Node(3);
	Node *n1=new Node(4);
	Node *n2=new Node(5);
	head->next=n1;
	n1->next=n2;
	n2->next=head;


	head=deleteHead(head);
	printLl(head);


	
	return 0;
}