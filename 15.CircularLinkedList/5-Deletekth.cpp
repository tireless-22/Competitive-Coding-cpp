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


Node *kthNode(Node *head,int k){

	Node *curr=head;
	if (k==1){
		Node *temp=head->next->next;
		head->data=head->next->data;

		delete(head->next);
		head->next=temp;
		return head;
	}
	
	for (int i=1; i<k-1;i++){
		curr=curr->next;
	}
	Node *temp=curr->next->next;
	delete(curr->next);
	curr->next=temp;
	return head;

}


int main (){

	Node *head=new Node(1);
	Node *n1=new Node(2);
	Node *n2=new Node(3);
	Node *n3=new Node(4);
	Node *n4=new Node(5);
	Node *n5=new Node(6);
	Node *n6=new Node(7);
	head->next=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	n4->next=n5;
	n5->next=n6;


	n6->next=head;

	head=kthNode(head,5);
	printLl(head);


	
	return 0;
}