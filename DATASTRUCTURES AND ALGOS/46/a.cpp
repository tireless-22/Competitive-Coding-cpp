#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    target=2*target;
    string direction;
    cin>>direction;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp+target);
        a.push_back(target-temp);
    }
    int size=a.size();
    vector<vector<int>> v(size+1,vector<int>(target+target+1,-1));
    bool checker=false;
    for(int i=0;i<=size;i++){
        for (int j=0;j<=target;j++){
            if(i==0 or j==0){
                v[i][j]=0;
                if(v[i][j]==target)
                    checker=true;
            }
            else if(j>=a[i-1]){
                v[i][j]=max({v[i-1][j],v[i-1][j-a[i-1]]+a[i-1]});
                if(v[i][j]==target)
                    checker=true;
            }
            else{
                v[i][j]=v[i-1][j];
                if(v[i][j]==target)
                    checker=true;
            }
        }
    }
    if(checker){
        cout<<"Possible";
    }
    else{
        cout<<"Not Possible";
    }
    return 0;
}