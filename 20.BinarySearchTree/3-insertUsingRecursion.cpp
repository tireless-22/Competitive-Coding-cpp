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
Node *insertUsingRecursion(Node *root,int data){
	if (root==NULL){
		root=new Node(data);
	}
	else if(data<root->data){
		// why this syntax ,when we are calling the function with any node the changes made at that node will not be reflected to this
		// we have to make them to reflect here by taking a values into this funtion and returning the changes made there
		root->left=insertUsingRecursion(root->left,data);
	}
	else{
		root->right=insertUsingRecursion(root->right,data);	
	}
	return root;
	// from here we are sending the changed root to the previous node
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
	root=insertUsingRecursion(root,49);
	inOrder(root);



	return 0;
}