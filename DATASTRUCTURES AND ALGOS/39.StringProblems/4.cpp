#include<bits/stdc++.h>
using namespace std;

// longest non repeated sequnce

int main(){
    string str;
    cin>>str;

    int finalCount=0,i=0,j=0,finalSize=0;
    vector<int> v(26,0);

    while(i<str.size()){
        if(v[str[i]-'a'+1]==0){
            if(i-j+1>finalCount){
                finalCount=i-j+1;
            }
            
            v[str[i]-'a'+1]++;
            i++;
        }
        else if(v[str[i]-'a'+1]==1){
            
            v[str[j]-'a'+1]--;
            j++;

        }

    }
    cout<<finalCount<<"\n";















}