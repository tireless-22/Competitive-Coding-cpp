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
int maxInBinaryTree(Node *root){
	if (root==NULL){
		return INT_MIN;
	}
	return max(root->data,max(maxInBinaryTree(root->left),maxInBinaryTree(root->right)));
}



int main(){



	Node *root=new Node(3);
	root->left=new Node(4);
	root->right=new Node(5);
	root->left->left=new Node(6);
	root->left->right=new Node(66);
	root->right->left=new Node(7);
	root->right->right=new Node(8);
	root->left->left->left=new Node(9);
	cout<<maxInBinaryTree(root);


	return 0;
}