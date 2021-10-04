#include<bits/stdc++.h>
using namespace std;



struct Node{
	int data;
	Node *next;
	
	Node(int x){
		data=x;
		next=NULL;
	}
};


int main(){
	Node *head=new Node(4);
	Node *secondNode=new Node(3);
	Node *thirdNode=new Node(6);

	head->next=secondNode;
	secondNode->next=thirdNode;

	cout<<head->next->data;


	return 0;

}