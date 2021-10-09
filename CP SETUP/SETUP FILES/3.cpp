 #include<bits/stdc++.h>
using namespace std;

 vector<int> countBits(int n) {
        vector<int> v(n+1,0);
        int temp=2;
        
        while(temp<=n){
            for(int i=1;temp*i<=n;i++){
                v[temp*i]++;
                
            }
            temp=temp*2;
        }
        
        return v;
        
}
int main(){
    vector<int> vv;

    vv=countBits(10);
    for (int x:vv)
        cout<<x<<"\n";



    return 0;
}