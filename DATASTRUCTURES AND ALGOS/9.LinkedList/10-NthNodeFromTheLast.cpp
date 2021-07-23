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
		cout<<head->data;
		head=head->next;
	}
}


int nthNodeFromTheNode(Node *head,int n){
	Node *curr1=head;
	Node *curr2=head;
	for (int i=1;i<=n;i++){

		curr2=curr2->next;
	}
	while(curr2!=NULL){

		curr2=curr2->next;
		curr1=curr1->next;
	}





	return curr1->data;

}

int main(){
	Node *head=new Node(9);
	Node *n1=new Node(7);
	Node *n2=new Node(5);
	Node *n3=new Node(3);

	head->next=n1;
	n1->next=n2;
	n2->next=n3;


	// printLl(head);

	cout<<nthNodeFromTheNode(head,1);



	return 0;
}