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

public:

	HashTable(int default_size=7){
		cs=0;
		ts=default_size;
		table=new Node<T>*[ts];

		for(int i=0;i<ts;i++){
			table[i]=NULL;
		}
	}


};