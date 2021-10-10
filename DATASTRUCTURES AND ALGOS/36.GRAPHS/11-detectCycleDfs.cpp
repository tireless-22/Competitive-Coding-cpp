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

	int  detectCycledfs(T src,map<T,bool> &visited,T parent){
		visited[src]=true;
		
		

		for(T x:l[src]){
			if(!visited[x]){

				return detectCycledfs(x,visited,src);
			}
			else if(x!=parent){
				
				return 1;

			}

			// return ;

		}

		return 0;

	}

	void bfs_detector(T src){
		map<T,bool> visited;

		for(auto p:l){
			visited[p.first]=false;
		}

		string s=(detectCycledfs(src,visited,src))?"yes":"no";
		cout<<s;


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

	g.bfs_detector(0);


	return 0;

}