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



Node *insetAtTheBegining(Node *head,int data){
	Node *temp=new Node(data);
	if (head==NULL){
		return temp; 
	}

	
	temp->data=head->data;
	head->data=data;
	temp->next=head->next;
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
	// printLl(head);
	int data=35;
	insetAtTheBegining(head, data);
	printLl(head);


	
	return 0;
}