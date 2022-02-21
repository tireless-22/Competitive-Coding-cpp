#include<bits/stdc++.h>
#include "trie.h"
using namespace std;

int main(){
	Trie t;
	string words[]={"apple","ball","bat"};
	for(string word:words){
		t.insert(word);
	}

	cout<<t.search("hello");
	cout<<t.search("apple");


	return 0;
}