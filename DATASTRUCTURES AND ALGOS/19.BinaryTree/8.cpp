#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;

	Node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}


};


vector<vector<int>> verticalOrderTraversal(Node *root){
	
	vector<vector<int>> ans;
	cout<<"check"<<endl;

	queue<pair<Node*,pair<int,int>>> q;
	map<int,map<int,multiset<int>>> nodes;
	q.push({root,{0,0}});
	while(!q.empty()){
		auto p=q.front();
		Node *temp=p.first;
		q.pop();
		int x=p.second.first;
		int y=p.second.second;
		nodes[x][y].insert(temp->data);

		if(temp->left){
			q.push({temp->left,{x-1,y+1}});
		}
		if(temp->right){
			q.push({temp->right,{x+1,y+1}});
		}

	}

	for(auto x:nodes){
		vector<int> col;

	
		for(auto y:x.second){
			col.insert(col.end(),y.second.begin(),y.second.end());
						
		}
		ans.push_back(col);
		
	}


	return ans;
}

int fn(){
	return 1;
}







int main(){
	Node *root=new Node(1);
	root->left=new Node(2);
	root->left->left=new Node(3);
	root->left->right=new Node(4);
	root->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	


	// int ans=fn();
	// cout<<ans;

	// cout<<root->left->data;
	vector<vector<int>> ans=verticalOrderTraversal(root);
	for(auto x:ans){
		for(auto y:x){
			cout<<y<<"  ";
		}
		cout<<endl;
	}




	return 0;
}