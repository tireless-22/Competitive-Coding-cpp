#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> l;
public:
    void addEdge(int x ,int y){
        l[x].push_back(y);
        l[y].push_back(x);
    }

    void bfs(T src){
        map <T,int> dist;
        // to store the distance
     
        queue<T> q;
        // to store the values

       for (auto node_pair:l){
        // we are assigning every
        T node =node_pair.first;
        dist[node]=INT_MAX;
        // by using the main  map list we are making the distance in the map infinity using the INT_MAX
       }
       q.push(src);
       dist [src]=0;

       
        while(!q.empty())
        {
            T node =q.front();
            q.pop();
            cout<<node<<endl;
            for(T nbr :l[node]){
               
                if(dist[nbr]==INT_MAX){
                    // if we the node is not visited the dist[nbr] is INT_MAX so we are checking
                    q.push(nbr);

                    dist[nbr]=dist[node]+1;
                    // here node is the is the present node we are storing the +1 values for their child if they are not present in the map

                }
            }
        }
        cout<<"distances from the source"<<endl;
        for (auto node_pair:l){
        T node =node_pair.first;
        cout<<dist[node]<<endl;
        }
    }
};

int main(){
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(2,5);
    g.addEdge(3,4);
    g.addEdge(4,5);
    // 0 ,{1}
    // 1,{2}
    // 2,{1,2,3,4}
    // 3,{2,4}
    // 4,{2,3,5}
    // 5,{2,4}
    // we use the for (T node_pair:l) for getting the every node
    g.bfs(0);


    




    return 0;
}