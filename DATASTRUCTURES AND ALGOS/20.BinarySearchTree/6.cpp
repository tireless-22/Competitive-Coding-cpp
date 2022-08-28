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

void inOrder(Node *head,int b){


	
	if(head!=NULL){
		

		inOrder(head->left,b);
		b--;
		if(b==0){
			return head->data;
		}
		cout<<head->data<<endl;
		inOrder(head->right,b--);
	}
}


int floorr(Node *root,int data){

	// cout<<root->data;
	if (root==NULL){
		return INT_MIN;
	}
	Node *curr=root;
	Node *parent=NULL;

	while (curr!=NULL){
		parent=curr;

		if (curr->data==data){
			return curr->data;
		}
		else if(data<curr->data){
			curr=curr->left;

		}
		else{
			curr=curr->right;
		}
	}

	return parent->data;


}



int main(){

	Node *root=new Node(50);
	root->left=new Node(25);
	root->right=new Node(75);
	root->left->left=new Node(10);
	root->left->right=new Node(40);
	root ->right->left=new Node(60);
	root ->right->right=new Node(90);
	cout<<floorr(root,119);
	inOrder(root,3);




	return 0;
}