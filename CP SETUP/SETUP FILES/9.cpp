#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp=12*24;
    int ce=0,co=0;
    

    
   while(temp%2==0){
            ce++;
            temp=temp/2;

        }

    while(temp%3==0){
        co++;
        temp=temp/3;
    }

    int i=-1;
    while(temp>1 and i*i<=temp){
        i+=6;
        while(temp%i==0){
            co++;
            temp=temp/i;
        }
        while(temp%(i+2)==0){
            co++;
            temp=temp/i;
        }
        
    }
        
    cout<<ce<<" "<<co<<endl;

       




    return 0;
}