#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        int i1=0,i2=0;
        int k=0;
        bool flag=true;
        int pen1=0,pen2=0;

        while(k<10 and flag){
            if(s[k]=='1'){
                if(k%2==0){
                    i1++;
                }
                else{
                    i2++;
                }
            }
        
            if(s[k]=='?'){
                if(k%2==0){
                    pen1+=1;
                }
                else{
                    pen2+=1;    
                }   
            }

            // cout<<"pen1 "<<pen1<<"pen2 "<<pen2<<"i1 "<<i1<<"i2 "<<i2<<endl;
            if (i1+pen1 >(9-k)/2+i2+1){
                // cout<<pen1<<" "<<(9-k)/2+i2<<endl;
                cout<<k+1<<"\n";
                flag=false;

            }
            else if(i2+pen2>i1+(9-k)/2){
                cout<<k+1<<"\n";
                flag=false;

            }
            if(k==9){
                cout<<10<<endl;
            }
            k++;


        }
        
    }




// 7
// 10
// 6
// 9
    return 0;
}