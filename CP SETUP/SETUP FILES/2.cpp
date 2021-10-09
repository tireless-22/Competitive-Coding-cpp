#include<bits/stdc++.h>
using namespace std;


struct Node {
    Node *next;
    Node *prev;
    int data;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

void preOrder(Node *head){
    if(head==NULL){
        return;
    }
    
    cout<<head->data<<endl;
    preOrder(head->prev);
    preOrder(head->next);
}

void inOrder(Node *head){
    if(head==NULL){
        return;
    }
    inOrder(head->prev);
    cout<<head->data<<endl;
    
    inOrder(head->next);
}


void postOrder(Node *head){
    if(head==NULL){
        return;
    };
    postOrder(head->prev);
    postOrder(head->next);
    cout<<head->data<<endl;
}




int main(){
    Node *head=new Node(0);
    Node *one=new Node(1);
    Node *two=new Node(2);
    Node *three=new Node(3);
    Node *four=new Node(4);
    Node *five=new Node(5);
    Node *six=new Node(6);

    head->prev=one;
    head->next=two;

    one->prev=three;
    one->next=four;

    two->prev=five;
    two->next=six;

    preOrder(head);
    cout<<endl;
    inOrder(head);
    cout<<endl;
    postOrder(head);



    return 0;
}