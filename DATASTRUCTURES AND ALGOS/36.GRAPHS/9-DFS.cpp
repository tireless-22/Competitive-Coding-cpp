#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Graph{
public:
	map<T,list<T>> l;

	void printAdjList(){
		for(auto p:l){
			cout<<p.first<<" ==>>  ";
			for(T x:p.second){
				cout<<x<<"  ";

			}
			cout<<endl;
		}


	}

	void bfs_helper(T src,map<T,bool> &visited){
		visited[src]=true;
		cout<<src<<"  ";
		

		for(T x:l[src]){
			if(!visited[x]){
				bfs_helper(x,visited);
			}
		}

	}

	void bfs(T src){
		map<T,bool> visited;

		for(auto p:l){
			visited[p.first]=false;
		}

		bfs_helper(src,visited);


	}





	void addEdge(T x,T y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
};


int main(){
	Graph<int> g;
	
	g.addEdge(0,3); 
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.printAdjList();

	g.bfs(0);


	return 0;

}