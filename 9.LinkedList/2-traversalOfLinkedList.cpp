#include<bits/stdc++.h>
using namespace std;


struct Node{
	// only to create the nodes
	int data;
	Node *next;
	// actually structures and classes are used to create the user defined data types
	// here we created a datatype of Node
	// Node *next;  why we used the Node here means we have store the adress of next is of type Node
	

	Node(int x){
		data=x;
		next=NULL;
	}

};

// to print the elements in the linked list

void printLl(Node *head){
	Node *cur=head;
	while(cur!=NULL){
		cout<<cur->data<<endl;
		cur=cur->next;
	}
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