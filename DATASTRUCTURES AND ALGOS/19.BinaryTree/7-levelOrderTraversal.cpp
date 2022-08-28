#include<bits/stdc++.h>
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
int main(){
	

	



	Node *root=new Node(3);
	root->left=new Node(2);
	root->left->left=new Node(1);

	root->right=new Node(4);
	root->right->right=new Node(5);

	// cout<<root->data;
	// Print(root);
	queue<Node *> q;

	q.push(root);
	cout<<q.front()->data;

	while(q.empty()==false){

		Node *temp=q.front();

		cout<<temp->data;

		q.pop();
		if(temp->left!=NULL){
			q.push(temp->left);


		}
		if(temp->right!=NULL){
			q.push(temp->right);

		}
				

	}




	return 0;

}