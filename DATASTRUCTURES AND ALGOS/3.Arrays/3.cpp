#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int time=0;


    if(c>a){
        time+=(c-a)*60;
    }
    else{
        // a<c
        time+=(24+c-a)*60;
    }

    if(d>b){
            time+=(d-b);
    }
    else{
            time+=(-60+d-b);

    }

    cout<<time<<endl;








    return 0;

}