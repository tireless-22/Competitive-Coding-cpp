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
void printLl(Node *head){
	while(head!=NULL){
		cout<<head->data<<endl;
		head=head->next;
	}
}

int searchLl(Node *head,int val){
	int count=0;
	while (head!=NULL){
		count++;
		if (head->data==val){
			return count;
		}
		head=head->next;	
	}
	return -1;
}


int SearchRecursive(Node *head,int val){
	if (head->next==NULL){
		return -1;

	}
	if(head->data==val){
		return 1;
	}
	else{
		head=head->next;
		int res =SearchRecursive(head,val);
		if (res==-1){
			return -1;
		}
		else{
		return (1+res);
		}
	}
	
}



int main(){


	Node *head=new Node(5);
	Node *n1=new Node(4);
	Node *n2=new Node(3);
	Node *n3=new Node(2);
	Node *n4=new Node(1);

	head ->next=n1;
	n1 ->next=n2;
	n2 ->next=n3;
	n3 ->next=n4;	
	printLl(head);
	cout<<searchLl(head,7);
	cout<<SearchRecursive(head,3);		




	return 0;
}