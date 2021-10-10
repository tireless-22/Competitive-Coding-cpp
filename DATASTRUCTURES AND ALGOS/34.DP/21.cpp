#include<bits/stdc++.h>
using namespace std;

int main(){
    int weights[]={1,3,3,5};
    int values[]={1,4,5,7};
    int totalKnapsackWeight=7;
    int n=4;
    vector<vector<int>> vv(n+1,vector<int>(totalKnapsackWeight+1,-1));

    for(int i=0;i<=n;i++){
        for (int j=0;j<=totalKnapsackWeight;j++){
            if(i==0 or j==0){
                vv[i][j]=0;
                cout<<vv[i][j]<<"  ";
            }
            else if(weights[i-1]<=j){
                vv[i][j]=max({vv[i-1][j],values[i-1]+vv[i][j-weights[i-1]]});
                cout<<vv[i][j]<<"  ";
            }
            else{
                vv[i][j]=vv[i-1][j];
                cout<<vv[i][j]<<"  ";
            }
        }
        cout<<endl;
    }
    cout<<vv[n][totalKnapsackWeight];



    
    return 0;
}
