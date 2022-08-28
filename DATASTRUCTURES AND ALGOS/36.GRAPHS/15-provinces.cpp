#include<bits/stdc++.h>
using namespace std;


// 10 7
// 1 2
// 2 3
// 3 4 
// 1 4
// 5 6
// 5 7
// 8 9





int main(){

	int n,m;
	// n=> nodes 
	// m=> edges
	cin>>n>>m;
	vector<int> G[n+1];
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);

	}

	// doing bfs because easy to implement
	vector<int> visited(n+1,0);
	int count=0;



	// for(int i=0;i<10;i++){
	// 	cout<<i<<"  ";
	// 	for(auto x:G[i]){
	// 		cout<<x;
	// 	}
	// 	cout<<endl;
	// }


	for(int i=1;i<11;i++){
		// cout<<i<<" ";

		if(!visited[i]){

			count++;
			queue<int> q;
			q.push(i);
			visited[i]=1;
			// cout<<i<<" ";
			
			while(!q.empty()){
				int node=q.front();
				q.pop();
				
				cout<<node;

				for(auto x:G[node]){
					if(!visited[x]){
						visited[x]=1;		

						q.push(x);
					}

				}

			}



			cout <<endl;

		}

	}
	cout<<"count"<<count<<endl;


	return 0;

	






}