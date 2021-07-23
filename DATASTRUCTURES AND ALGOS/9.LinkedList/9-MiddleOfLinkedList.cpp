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

void PrintLl(Node *head){
	// Node *curr=head;
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}


int middleOfTheLinkedLIst(Node *head){
	Node *curr1=head;
	Node *curr2=head;
	while(curr2!=NULL and curr2->next!=NULL){
		curr1=curr1->next;
		curr2=curr2->next->next;
	}
	return curr1->data;

}

int main(){
	Node *head=new Node(7);
	Node *n1=new Node(5);
	Node *n2=new Node(3);
	Node *n3=new Node(1);



	head->next=n1;
	n1->next=n2;
	// n2->next=n3;

	// PrintLl(head);
	cout<<middleOfTheLinkedLIst(head);




	return 0;
}




