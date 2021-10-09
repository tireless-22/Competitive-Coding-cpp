#include<bits/stdc++.h>
using namespace std;
int main(){

    int max1,max2;
    int arr[] {3,34,43,73,23};
    int size=sizeof(arr)/sizeof(arr[0]);
    max1=arr[0];
    max2=-1;
    for (int i=1; i<size;i++){
        if (arr[i]>=max1){
            max2=max1;
            max1=arr[i];

        }
        else if (arr[i]>max2){
            max2=arr[i];
        }

    }
    cout<<max1<<endl<<max2;




    return 0;
}