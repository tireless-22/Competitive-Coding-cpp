#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s="this is knk is ";

    vector<int > v={34,23,25,46,46,34,234,5,45345,34};
    // cout<<v.find(34);

    cout<<count(s.begin(),s.end(),'i')<<endl;


    // cout<<find(s.begin(),s.end(),'i');

    int found=s.find("is");
    while(found!=string::npos){
        cout<<"this is present at index "<<found<<endl;
        found=s.find("is",found+1);
    }



    return 0;

}
















































