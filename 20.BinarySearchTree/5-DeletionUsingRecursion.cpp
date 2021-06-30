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
void inOrder(Node *head){
	if(head!=NULL){

		inOrder(head->left);
		cout<<head->data<<endl;
		inOrder(head->right);
	}
}



Node *getSuccessor(Node *root){
	Node *curr=root->right;

	while(root!=NULL and root->left!=NULL){
		curr->left;
	}



	return curr;



}

Node *deletingUsingRecursion(Node *root,int data){
	if (root==NULL){
		return root;
		// when the root is not presesnt here
	}

	else if(data<root->data){
		root->left=deletingUsingRecursion(root->left,data);
	}
	else if(data>root->data){
		root->right=deletingUsingRecursion(root->right,data);

	}
	else{
		// if we got the searching list
		if(root->left==NULL){
			Node *temp=root->right;
			delete(root);
			return temp;
		}
		else if(root->right==NULL){
			Node *temp=root->left;
			delete(root);
			return temp;

		}

		else{
			// both left and right are not nulll
			Node *successor=getSuccessor(root);
			root->data=successor->data;
			root=deletingUsingRecursion(root->right,successor->data);
		}
	}

	return root;
}


int main(){

	Node *root=new Node(50);
	root->left=new Node(25);
	root->right=new Node(75);
	root->left->left=new Node(10);
	root->left->right=new Node(40);
	root ->right->left=new Node(60);
	root ->right->right=new Node(90);
	root=deletingUsingRecursion(root,90);
	inOrder(root);



	return 0;
}