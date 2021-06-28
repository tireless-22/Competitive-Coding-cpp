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

void NodeAtDistanceK(Node *root,int k){
	if (root==NULL){
		return;
	}
	if (k==0){
		cout<<root->data<<endl;
	}
	else{
		NodeAtDistanceK(root->left,k-1);
		NodeAtDistanceK(root->right,k-1);
	}
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
	int k=2;
	NodeAtDistanceK(root,k);


	return 0;
}