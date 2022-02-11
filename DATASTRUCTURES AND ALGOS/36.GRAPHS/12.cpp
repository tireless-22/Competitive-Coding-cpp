#include<bits/stdc++.h>
using namespace std;



class Graph{
public:
	map <int , list<int>> l;
	void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);

	}

	void printNodes(){
		for(auto p:l){
			cout<<p.first<<" --> ";
			for(int x:p.second){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}




};

int main(){
	Graph g;
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,1);
	g.addEdge(1,5);
	g.addEdge(5,2);	
	g.printNodes();



	return 0;
}