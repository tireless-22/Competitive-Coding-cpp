#include<bits/stdc++.h>
using namespace std;


struct Node{
	Node *left;
	Node *right;
	int data;
	Node(int x){
		data=x;
		left=NULL;
		right=NULL;

	}

};

void inOrder(Node *head){
	if(head!=NULL){

		inOrder(head->left);
		cout<<head->data<<endl;
		inOrder(head->right);
	}
}

void preOrder(Node *head){
	if(head!=NULL){
		cout<<head->data<<endl;
		preOrder(head->left);
		
		preOrder(head->right);
	}
}

void postOrder(Node *head){
	if(head!=NULL){
		postOrder(head->left);
		
		postOrder(head->right);
		cout<<head->data<<endl;
	}
}

int main(){



	Node *root=new Node(3);
	root->left=new Node(4);
	root->right=new Node(5);
	root->left->left=new Node(6);
	root->right->left=new Node(7);
	root->right->right=new Node(8);
	cout<<"inOrder";
	inOrder(root);

	cout<<"preOrder";
	preOrder(root);

	cout<<"postOrder";
	postOrder(root);


	return 0;
}