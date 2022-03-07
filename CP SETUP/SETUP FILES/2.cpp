#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int b;
    cin>>a>>b;
    vector<int> v;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }

    for( int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<a<<"  "<<b<<endl;

    int maxx=INT_MAX;
   

    for(int c=0;c<=n-c;c++){
        for(int d=a+c;d<=c+b and d<n and d!=c;d++){
            cout<<c<<" "<<d<<endl;

            if((v[c]+v[d])<maxx){
                maxx=v[c]+v[d];
            }
        }
    }

    cout<<maxx;





    
    return 0;
}