#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
    int j=0;
    int sum=0;
    int maxLen=0;
    int i=0;
    while(j < n) {
        sum += v[j];
        if (sum <k) {
            j++;
            maxLen = max(maxLen, j-i);
            cout<<i<<j<<endl;

        }
        
        else if (sum > k) {
            while (sum > k) {
                sum -= v[i];
                 i++;
            }
             
            j++;
        }
    }

    cout<<maxLen;

}

