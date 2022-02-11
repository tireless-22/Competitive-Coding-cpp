#
#include<bits/stdc++.h>
using namespace std;


void combinations(int target,int index,vector<int> v, int &n){
    if(target==0){
        cout<<"hello"<<endl;
        n++;
        return ;

    }
    cout<<index<<endl;

    if(index=v.size()){
        return ;
    }

    if(v[index]<=target){
        combinations(target-v[index],index+1,v,n);

    }
    combinations(target,index+1,v,n);
}



int main() {
    // no of combination of values of sum that we can we can make using the elemenents
    // as we are talking about combinations repetitions are also alowed


    vector<int> v={2,3,4,3};
    int target=6;
    int n=0;
    int index=0;
    cout<<n<<endl;

    combinations(target,index,v,n);
    cout<<n<<endl;

    return 0;
}