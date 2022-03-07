#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n=456946987;
    int num=n;
    vector<int> v;

    while(n%2==0){
        n=n/2;
        v.push_back(2);
    }
    while(n%3==0){
        n=n/3;
        v.push_back(3);
    }

    for(int i=5;i*i<=n;i+=6){
        while(n%i==0){
            n=n/i;
            v.push_back(i);
        }

        while(n%(i+2)==0){
            n=n/(i+2);
            v.push_back(i+2);
        }
    }
    

    if(n>1){
        v.push_back(n);
    }


    return 0;
}