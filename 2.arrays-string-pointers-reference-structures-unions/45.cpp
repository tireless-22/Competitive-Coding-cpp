#include<bits/stdc++.h>
using namespace std;
int main(){

    int max1,max2;
    int arr[] {34,43,23};
    max1=arr[0];
    max2=-1;
    for (int i=0; i<2;i++){
        if (arr[i]>=max1){
            max1=arr[i];
        }
        else if (arr[i]>max2){
            max2=arr[i];
        }

    }
    cout<<max1<<endl<<max2;




    return 0;
}