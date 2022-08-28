#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> G[],int n,vector<int>&visited ){

	visited[n]=1;
	cout<<n;
	for(auto x:G[n]){
	    if(!visited[x]){
	        dfs(G,x,visited);
	    }
	}
}
int main(){

	int n,m;
	cin>>n>>m;
	vector<int> G[n+1];
	for(int i=0;i<m;i++){

		int u,v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);

	}
	vector<int> visited(n+1,0);

	dfs(G,1,visited);

	return 0;
}