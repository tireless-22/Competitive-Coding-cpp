#include<bits/stdc++.h>
using namespace std;


template<typename T>
class Graph{

public:
	map< T,list<T>>l;
	void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void printAdjList(){
		for (auto p:l){
			cout<<p.first<<" ==>>  ";
			for(int x:p.second){
				cout<<x<<"  ";
			}
			cout<<endl;
		}
	}

	void bfs(T src){
		map<T,bool> m;

		queue<T> q;
		q.push(src);
		m[src]=true;

		while(!q.empty()){
			T temp=q.front();
			cout<<temp<<" ";
			

			q.pop();
			for(auto nbr:l[temp]){
				
				if(m[nbr]!=true){
					q.push(nbr);
					m[nbr]=true;

				}
			}
		}

	}

};

int main(){

	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(0,3); 
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.printAdjList();
	g.bfs(0);




	return 0;
}