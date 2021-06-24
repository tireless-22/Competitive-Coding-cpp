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
	if (head==NULL){
		return;
	}
	cout<<head->data<<endl;
	head=head->next;
	printLl(head);
}

int main(){
	Node *head=new Node(5);
	Node *n1=new Node(3);
	Node *n2=new Node(2);
	head->next=n1;
	n1->next=n2;
	printLl(head);
	return 0;
}