#include <bits/stdc++.h>
using namespace std;


struct Node {
	Node *left;
	Node *right;
	int data;

	Node(int x){

		data=x;
		left=NULL;
		right=NULL;
	}


};



bool searchUsingIteration(Node *root,int data){


	while(root!=NULL){
		if (root->data==data){
			return true;
					}
		else if(data < root->data){
			
			root=root->left;
		}
		else{
			
			root=root->right;
		}
	}
	return false;
}

int main(){

	Node *root=new Node(50);
	root->left=new Node(25);
	root->right=new Node(75);
	root->left->left=new Node(10);
	root->left->right=new Node(40);
	root ->right->left=new Node(60);
	root ->right->right=new Node(90);
	cout<<searchUsingIteration(root,41);



	return 0;
}