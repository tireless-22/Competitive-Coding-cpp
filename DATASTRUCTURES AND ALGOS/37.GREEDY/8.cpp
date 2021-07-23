#include <bits/stdc++.h>
using namespace std;

int maxProfit(int k,int prices[],int n){
    
    priority_queue<int> p;
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            int temp;
            temp=prices[i]-prices[j];

            if(temp>0){
                p.push(temp);


            }
            
        }
    }

    // cout<<p.top()<<endl;
    int res=0;
    for (int i=0;i<k;i++){
        // if(p.empty()){
        //     break;
        // }
         if(p.top()>0){
            res=res+p.top();


        }
        else{
            break;
        }
        // res=res+p.top();
        // cout<<"res"<<res<<endl;

        p.pop();
        
    }


    
    return res;
}

int main(){

    int test;
    cin>>test;

    for(int i=0;i<test;i++){
        int n,k;

        cin>>n;
        cin>>k;

        int arr[n];

        for(int x = 0;x<n;x++){
            cin>>arr[x];
        }


        cout<<maxProfit(k,arr,n)<<"\n";

    }

    return 0;
}


