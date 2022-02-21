#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	char data;
	unordered_map<char,Node*>m;
	bool isTerminal;

	Node(char data){
		data=data;
		isTerminal=false;
	}
};

class Suffix_Trie{
	Node *root;
public:
	Suffix_Trie(){
	
		root=new Node('\0');
	}

	void insert_helper(string word){
		Node *temp=root;
		for(char ch:word){
			if(temp->m.count(ch)==0){

				Node *n=new Node(ch);
				temp->m[ch]=n;
			}
				temp=temp->m[ch];
		}

		temp->isTerminal=true;
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

	void insert(string word){
		// pick all the substring from (i,eos) and insert helper
		for(int i=0;word[i]!='\0';i++){
			insert_helper(word.substr(i));


		}
	}

};



int main(){
	string input="hello";

	Suffix_Trie t;

	t.insert(input);

	cout<<t.search("llo");
	cout<<t.search("ol");




	return 0;
}