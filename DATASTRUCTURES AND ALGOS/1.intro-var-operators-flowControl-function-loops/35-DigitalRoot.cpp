#include<bits/stdc++.h>
using namespace std;

int digitalRoot(int n)
{
    int sum=n;
 
    //Your code here
    while(sum>=10){
        n=sum;
        sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
    }
    return sum;
}



int main (){
	cout<<digitalRoot(11199952);
	
	return 0;
}