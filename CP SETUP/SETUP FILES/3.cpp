#include<bits/stdc++.h>
using namespace std;


void recurses(string s,int i,int n, string temp){

    if(n==0){
        cout<<temp<<endl;
        return;

    }



    recurses(s,i,n-1,temp);
    temp=s[n-1]+temp;


    recurses(s,i,n-1,temp);






}


 int main(){

    string s="abcd";
    string temp="";

    recurses(s,0,s.size(),temp);




    return 0;
 }