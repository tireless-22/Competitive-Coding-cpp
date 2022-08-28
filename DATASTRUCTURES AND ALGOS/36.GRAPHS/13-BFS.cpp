#include<bits/stdc++.h>
using namespace std;


// adjacency list
// undirected graph
// 8 8
// 1 2
// 1 6
// 2 3
// 2 4
// 6 7
// 6 8
// 4 5
// 7 5





int main(){
	int n,m;
	cin>>n>>m;

	vector<int> G[n+1];


	for(int i=0;i<m;i++){
		int u, v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}


	// // assuminng starting node is 1
	// vector<int> visited(n+1,0);
	// // as nodes are 1 based indexing
	// queue<int> q;
 //    // for making the bfs
 //    q.push(1);
 //    cout<<1;

 //    while(!q.empty()){
 //    	int node=q.front();
 //    	q.pop();
 //    	visited[node]=1;
 //    	for(int x:G[node]){
 //    		if(!visited[x]){
 //    			cout<<x;
 //    		    q.push(x);
 //    		}
    		
 //    	}
 //    } 



    // /asssuming starting node is 6


  
	vector<int> visited(n+1,0);
	queue<int> q;


    q.push(6);
    cout<<6;
    visited[6]=1;
    while(!q.empty()){
    	int node=q.front();
    	q.pop();

    	for(auto x:G[node]){
    		if(!visited[x]){
    			cout<<x;
    			visited[x]=1;
    			q.push(x);
    		}
    	}

    }








	return 0;

}