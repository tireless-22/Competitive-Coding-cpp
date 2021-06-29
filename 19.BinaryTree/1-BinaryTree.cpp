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


int main(){



	Node *root=new Node(3);
	Node *left=new Node(4);
	Node *right=new Node(5);
	root->left=left;
	root->right=right;
	return 0;
}