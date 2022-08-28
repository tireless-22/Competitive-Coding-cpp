#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> Graph(n,vector<int> (m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp;
            cin>>temp;

            Graph[i][j]=temp;

        }
    }

    int count=0;


    vector<vector<int>> visited(n,vector<int>(m,0));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            if(visited[i][j]==0 and Graph[i][j]==1){
                // cout<<count;

                count++;
                // we have to do the bfs here
                visited[i][j]=1;
                queue<pair<int,int>> q;
                q.push({i,j});

                while(!q.empty()){
                 int x=q.front().first;
                 int y=q.front().second;
                 q.pop();
                 for(int k=-1;k<=1;k++){
                     for(int h=-1;h<=1;h++){
                         int px=x+k;
                         int py=y+h;

                         if(px>=0 and px<n and py>=0 and py<m and visited[px][py]==0 and Graph[px][py]==1){
                             q.push({px,py});
                             visited[px][py]=1;
                         }
                     }
                 }
                }

            }
        }
    }

    cout<<count<<endl;



    return 0;
}