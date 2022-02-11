#include<bits/stdc++.h>

using namespace std;

int main(){


    string s;
    cin>>s;

    unordered_map<char,int> uoCounter;

    for(char c:s){
        uoCounter[c]++;
    }

    for(auto a:uoCounter){
        cout<<a.first<<"   "<<a.second<<endl;
    }






    return 0;
}