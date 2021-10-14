#include<bits/stdc++.h>
using namespace std;

struct Node{
	// only to create the nodes
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
// to print the elements in the linked list

void printLl(Node *head){
	// if we pass a pointer variable to a fucntion
	// then both are different 
	// if we change the headd in this funtion this will not reflect to the other
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
	
}


int main(){
	Node *head=new Node(5);
	Node *n1=new Node(3);
	Node *n2=new Node(2);
	Node *n3=new Node(1);
	head->next=n1;
	n1->next=n2;
	n2->next=n3;





	printLl(head);
	cout<<endl;

	head=reverse(head);

	printLl(head);



	return 0;
}