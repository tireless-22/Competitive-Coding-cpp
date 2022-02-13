#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node {
public:
	string s;
	T value;
	Node *next;
	Node(string key ,T value){
		this->s=key;
		this->value=value;
		next=NULL;

	}
};



class HashTable{
	Node <T> **table;
	int cs;
	// total entries that we have right now
	int ts;
	// table size

	int Hashfn (string key){
		int idx=0;
		int power=1;
		for(auto ch:key){
			ind=(idx+ch*power)%ts;
			power=(power*29)%ts;


		}
		return idx;
	}



public:

	HashTable(int default_size=7){
		cs=0;
		ts=default_size;
		table=new Node<T>*[ts];

		for(int i=0;i<ts;i++){
			table[i]=NULL;
		}
	}

	void insert(string key,T val){
		//  we will make the past head to next of this node 
		//we will make this node as the head of that particular index
		ind idx=hashFn(key);
		Node <T> *n=new Node<T> (key,val);
		n->next=table[idx];
		table[idx]=n;
		cs++;

	}




};