#include <bits/stdc++.h>
using namespace std;

int soln(int valX,int valY){

    int ansArray[valX+1][valY+1];
    for(int i=0;i<=valX;i++){
        for(int j=0;j<=valY;j++){
            if(i==0 and j==0){
                ansArray[i][j]=1;
            }
            else if(i==0){
                ansArray[i][j]=ansArray[i][j-1];
            }
            else if(j==0){
                ansArray[i][j]=ansArray[i-1][j];
            }
            else{
                ansArray[i][j]=ansArray[i][j-1]+ansArray[i-1][j];
            }


        }
    }


    return ansArray[valX][valY];
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    int t;
    cin>>t;
    while(t--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int val1=abs(x2-x1);
        int val2=abs(y2-y1);
        cout<<soln(val1,val2)<<endl;
    }
 
    return 0;

}