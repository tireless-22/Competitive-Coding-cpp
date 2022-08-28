#include <bits/stdc++.h>
using namespace std;
int counter=0;


void merge(vector<int> &v,int s,int e){
    int m=(s+e)/2;
    int i=s;
    int j=m+1;
    vector<int> vv;


    while(i<=m and j<=e){
        if(v[i]<=v[j]){
            vv.push_back(v[i++]);
        }
        else{

            vv.push_back(v[j++]);
            cout<<m-i+1<<endl;
            counter=counter+m-i+1;
        }
    }

    while(i<=m){
        vv.push_back(v[i++]);

    }
    while(j<=e){
        vv.push_back(v[j++]);

    }
    int k=0;
    for(int i=s;i<=e;i++){
        v[i]=vv[k++];
    }



}


void mergeSort(vector<int> &v,int s,int e){
    

    if(s>=e){
        // s>=e
        // both the pointers are marked to same element
        return ;

    }

    int m=(s+e)/2;

    mergeSort(v,s,m);
    mergeSort(v,m+1,e);


    merge(v,s,e);
    return;
}



int main(){
    vector<int> v={5,3,2,4,1};
    int s=0;
    int e=v.size()-1;

    mergeSort(v,s,e);

    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<counter;



    return 0;
}