#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;
	// self referntial structure
// 	A structure can have members which point to a structure variable of the same type.
// These types of structures are called self referential structures and are widely used in
// dynamic data structures like trees, linked list, etc.
	Node(int x){
		data=x;
		next=NULL;
	}

};
int main (){
	cout<<"hello";

	Node *head=new Node(3);

	Node *n1=new Node(4);
	Node *n2=new Node(5);

	head->next=n1;
	n1->next=n2;

	
	return 0;
}