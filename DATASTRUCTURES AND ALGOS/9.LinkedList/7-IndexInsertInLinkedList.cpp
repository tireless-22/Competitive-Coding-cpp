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

Node *insertAtTheGivenPosition(Node *head,int pos, int x){
	Node *temp=new Node(x);


	if (pos==1){
		temp->next=head;
		return temp;
	}

	Node *curr=head;

	// why we used for loop means we know how many times we have 
	// to go inorder to insert the node
	// we can do the same with the for but it increases complexity
	

	for (int i=0;i<pos-2;i++){
		curr=curr->next;
	}
	if (curr==NULL){
		return head;
	}

	temp->next=curr->next;		
	curr->next=temp;



	// int count=1;

	// while(curr->next!=NULL){
	// 	if (count+1==pos){
	// 		temp->next=curr->next;
	// 		curr->next=temp;
	// 	}
	// 	count++;
	// 	curr=curr->next;
	// }
	return head;
}


int main (){

	Node *head=new Node(3);
	Node *n1=new Node(4);
	Node *n2=new Node(5);
	Node *n3=new Node(6);
    Node *n4=new Node(7);

	head->next=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	int pos=6;
	int x=435;
	head=insertAtTheGivenPosition(head,pos,x);
	printLl(head);

	
	return 0;
}