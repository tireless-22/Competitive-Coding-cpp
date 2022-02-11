#include<bits/stdc++.h>
using namespace std;


void recurse(vector<int> a ,int sum,int n,vector<int> ds){
    if(sum==0){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(n==0){
        return;
    }

    if(a[n-1]<=sum){
        ds.push_back(a[n-1]);
        recurse(a,sum-a[n-1],n,ds);
        ds.pop_back();

    }
    recurse(a,sum,n-1,ds);

}


int main(){
    vector<int> a={2,3,6,7};
    int sum=9;
    vector<int> ds;
    recurse(a,sum,a.size(),ds);


    return 0;
}
