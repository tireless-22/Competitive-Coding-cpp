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

    

    int greater=INT_MIN;
    int rowOrcol=0;
    int number=0;
    
    for (int i=0;i< nRows;i++){
        int temp=0;
        for (int j=0;j<mCols;j++){
            temp+=input[i][j];
            
            
        }
        if(temp>greater){
            greater=temp;
            rowOrcol=0;
            number=i;
        }
    }
     for (int i=0;i< mCols;i++){
        int temp=0;
        for (int j=0;j<nRows;j++){
            temp+=input[j][i];
            
            
        }
        if(temp>greater){
            greater=temp;
            rowOrcol=1;
            number=i;
        }
    }
    
    if(rowOrcol==0){
        cout<<"row"<<" "<<number<<" "<<greater<<endl;
    }
    else{
        cout<<"column"<<" "<<number<<" "<<greater<<endl;
    }


    }
    return 0;
}