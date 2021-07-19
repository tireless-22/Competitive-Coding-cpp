#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;

    for (int i=0;i<n;i++){
        cin>>s;
        int len=s.size();
        int count=0;
        char temp=s[0];
        for (int i=1;i<len;i++){
            if(s[i]!=temp){
                temp=s[i];

            }
            else{
                if(s[i]=='a'){
                    temp='b';
                }
                else{
                    temp='a';
                }
                count++;
            }

        }
        cout<<count<<"\n";
        




    }




    return 0;
}