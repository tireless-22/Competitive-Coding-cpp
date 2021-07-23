#include<bits/stdc++.h>
using namespace std;

template<typename T>
// this is also called as generic type
// it will helps us to auto matically allocate acording to the data type
class Graph{
	map<T,list<T>> l;
public:
	void addEdge(int x ,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}

	void bfs(T src){
		map <T,int> visited;
		// existed or not 
		queue<T> q;
		// queue is best because it is making us to add to add the end and pop from the front
		// we can also do the same thing with using data structures like vectors or arrays or 
		// any others but the time and space are not as better as queue in this case
		// to pop and push the values
		q.push(src);
		visited[src]=true;
		// !q.isEmpty() is equal to q.isEmpty==false try to learn shortcuts
		while(!q.empty())
		{
			T node =q.front();
			q.pop();
			cout<<node<<endl;
			for(T nbr :l[node]){
				// it will check wheather the key is present in the map or not
				// we can also do the work of map using vector 
				// in that case we have to check the node in vector 
				// the purpose of the map is for checking of visiting  the node
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr]=true;
				}
			}
		}
	}
};

int main(){
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(3,4);
	g.addEdge(4,5);
	g.bfs(0);
	// g.printAdjList();




	return 0;
}