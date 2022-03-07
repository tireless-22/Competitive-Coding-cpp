#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int temp;
            cin>>temp;
            v[i][j]=temp;
        }
    }
    priority_queue<int ,vector<int>,greater<int>> s;
    priority_queue<int> pq;

    for(int i=0;i<m;i++){
        int maxx=-1;
        int secondMax=-1;
        for(int j=0;j<n;j++){
            if(v[j][i]>maxx){
                secondMax = maxx;
                maxx  = v[j][i];
            }
            else if(v[j][i] > secondMax){
                secondMax = v[j][i];
            }
            s.push(maxx);
            pq.push(secondMax);
        }
    }
    cout<<min(s.top(),pq.top());
    return 0;
}