#include<bits/stdc++.h>
using namespace std;

// IT IS PREFIX TRIE IMPELEMENTATION 
// WE CAN USE THIS CODE ANYWHERE WE WANT


class Node{
	public:
	// node contains data and array to store the next nodes map 
	// and a bool to tell us wheather the node is a end of an element 
	char data;
	unordered_map<char,Node*>m;
	bool isTerminal;

	Node(char data){
		data=data;
		isTerminal=false;
	}
};

class Trie{
	Node *root;
public:
	Trie(){
		// first trie contains a node with \0
		root=new Node('\0');
	}

	void insert(string word){
		Node *temp=root;
		// first we will start from the root means head
		for(char ch:word){
			// we will start traversing the each char in the string
			if(temp->m.count(ch)==0){
				// we will check wheater the peresent character is
				// present in nodes unordered map if not we will add
				// element to the this present nodes array

				Node *n=new Node(ch);
				temp->m[ch]=n;
				// we will create a node and we will link that to the nodes array
			}
			// we will go that char and we will continue
			temp=temp->m[ch];
		}

		temp->isTerminal=true;
		// after putting all the char of that string in the trie
		// we will make the last node isTerminal as true
	}

	bool search(string word){
		Node *temp=root;
		for(char c:word){
			if(temp->m.count(c)==0){
				return false;
			}
			temp=temp->m[c];

		}
		return temp->isTerminal;

	}

};