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


bool search(Node *root,int x){
	if(root==NULL){
		return false;
	}
	else if(root->data==x){
		return true;
	}
	else if(x<root->data){
		return search(root->left, x);
	}
	else {
		return search(root->right, x);
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
	cout<<search(root,49);



	return 0;
}