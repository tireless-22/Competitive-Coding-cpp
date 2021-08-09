#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int main() {
    int t;
    cin>>t;

    while(t--){
        
        int nRows,mCols;
        cin>>nRows>>mCols;
        vector<vector<int>>input(nRows,vector<int> (mCols,0));
        for (int i=0;i<nRows;i++){
            for(int j=0;j<mCols;j++){
                int temp;
                cin>>temp;

                input[i][j]=temp;
            }
        }
        


    

   
    }
    return 0;
}