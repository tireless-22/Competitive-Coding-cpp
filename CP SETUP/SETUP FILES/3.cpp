#include <bits/stdc++.h>
using namespace std;

int main(){

    string s1,s2;
    cin>>s1>>s2;
    int m=s1.size();
    int n=s2.size();

    vector<vector<int>> v(m+1,(vecotr<int>, (m+1,0)));
    vector<vector<int>> u(m+1,(vecotr<int>, (m+1,0)));

    int ans=0;

    for(int i=0;i<=m;i++){
        for( int j=0;j<=n;j++){
            if(s1[i]=='0'){
                v[i][j]=v[i-1][j]+1;

            }
            else{
                 u[i][j]=u[i-1][j]+1;

            }
            if(s2[j]=='0'){
                v[i][j]+=1;

            }
            else{
                u[i][j]+=1;

            }

            cout<<v[i][j]<<"   "<<u[i][j]<<endl;





        }
    }
    cout<<v[m][n];

    return 0;
}   