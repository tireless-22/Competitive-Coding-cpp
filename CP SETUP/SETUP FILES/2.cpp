#include<bits/stdc++.h>
using namespace std;

// 1 and 2 airlines
// 3 travel and entertainment
// 4 and 5 banking and financial services
// 6 merchandising and banking 
// 7 petroleum
// 8 health care, telecommunications
// 9 national assignment


// bool check1(){

//     return true;



// }


// bool check2(){

//     retrun true;

// }


// bool check3(){
//     return true;


// }

int main(){
    string s="5241 6701 2345 6789";
    vector<int> v;


    for(int i=0;i<s.length();i++){
        if(s[i]=' '){
            int x=stoi(s[i]);
            v.push_back(x);

        }
    }

    for(int x:v){
        cout<<x<<endl;
    }














    return 0;
}