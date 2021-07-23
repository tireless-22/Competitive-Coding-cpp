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
int height(Node *root){
	if (root==NULL){
		return 0;
	}
	return max(height(root->left),height(root->right))+1;


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
	cout<<height(root);


	return 0;
}