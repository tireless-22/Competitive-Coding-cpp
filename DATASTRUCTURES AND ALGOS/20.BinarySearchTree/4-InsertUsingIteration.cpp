#include<bits/stdc++.h>
using namespace std;

struct Node {
	Node *left;
	Node *right;
	int data;
	Node(int x ){
		data=x;
		left=NULL;
		right=NULL;
	}
};



Node *insertUsingIteration(Node *root,int data){
	Node *temp=new Node(data);
	Node *parent=NULL;
	Node *curr=root;
	while(curr!=NULL){
		parent=curr;
		if (data<curr->data){
			curr=curr->left;

		}
		else{
			curr=curr->right;
		}
	}

	if (parent==NULL){
		return temp;
		// IT IS FOR WHEN THE GIVEN ROOT IS NULL

	}
	else if(data<parent->data){
		parent->left=temp;
		return root;

	}
	else {
		parent->right=temp;
		return root;
	}




	return 0;
}


void inOrder(Node *head){
	if(head!=NULL){

		inOrder(head->left);
		cout<<head->data<<endl;
		inOrder(head->right);
	}
}



int main(){

	Node *root=new Node(50);
	root->left=new Node(25);
	root->right=new Node(75);
	root->left->left=new Node(10);
	root->left->right=new Node(40);
	root ->right->left=new Node(60);
	root ->right->right=new Node(90);
	root=insertUsingIteration(root,56);
	inOrder(root);



	return 0;
}