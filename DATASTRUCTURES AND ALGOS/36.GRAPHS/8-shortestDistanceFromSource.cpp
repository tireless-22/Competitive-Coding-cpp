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
		map<T,int> m;

		queue<T> q;
		q.push(src);


		for(auto p:l){
			for(int x:p.second){
				m[x]=INT_MAX;
			}
		}
		m[src]=0;

		while(!q.empty()){
			T temp=q.front();
			cout<<temp<<" "<<m[temp]<<endl;
			

			q.pop();
			for(auto nbr:l[temp]){
				
				if(m[nbr]==INT_MAX){
					q.push(nbr);
					m[nbr]=m[temp]+1;

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