#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Graph{

    map<T,list<T>> l;

    public:
        void addEdge(int x,int y){
            l[x].push_back(y);
            l[y].push_back(x);
        }




        void printAdjList(){

            for(auto p:l){
                cout<<p.first<<"  ==>>  ";
                for( T x:p.second){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
        }


        void detectCycleBfs(T src){
            queue<int> q;
            map<T,T> visited;
            bool check=false;

            for(auto  x:l){
                visited[x.first]=-1;

            }
            q.push(src);
            visited[src]=src;

            while(!q.empty()){
                int temp=q.front();

                q.pop();

                for(int x:l[temp]){
                    if(visited[x]==-1){
                        visited[x]=temp;
                        q.push(x);

                    }

                    else if(x!=visited[temp]){
                        check=true;

                        break;
                    }
                  
                   
                }
            }

            string s=(check)?"yes":"no";
            cout<<s;
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
    g.detectCycleBfs(0);






    return 0;
}