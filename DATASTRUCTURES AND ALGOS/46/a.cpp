#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=0;
    
    for(int i=0;i<t;i++){
        int x,a,b;
        cin>>x>>a>>b;
       

        bool check=false;

        int maxx;
        int minn;

        if(a>=b){
            maxx=a;
            minn=b;
        }
        else{
            maxx=b;
            minn=a;
        }
       
        
        if(x==0){
            check=true;
        }

        else if(a==0 and b==0){
            check=false;
        }
        
        else if(a==0){
            if(x%b==0){
                check=true;
            }
            else{
                check=false;
            }
        
        }
        else if(b==0){
            if(x%a==0){
                check=true;

            }
            else{
                check=false;
            }
        }
        
        else{
             int minnn=minn;
            int r1=x%maxx;
            int r2=x%minn;
            while(minn<maxx){
                if(r1%(maxx-minn)==0 or r2%(maxx-minn)==0){
                    check=true;

                    break;
                }
             minn+=minnn;
            }
            
        }

        
        ans=(ans+check*(int)(pow(2, i+1) + 0.5))%1000000007;

        
    }
    
    cout<<ans;


    return 0;
    
}