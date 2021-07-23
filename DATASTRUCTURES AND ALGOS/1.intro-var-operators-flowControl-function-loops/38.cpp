#include <bits/stdc++.h>
using namespace std;
int main(){
	
	unsigned long long n=0,ans=0,num=0,i=0,mainSum=0;
	cin>>n;
	for (int k=0;k<n;k++){
		cin>>num;
		if(num<1){
    		continue;
		}
  		mainSum=0;
  		i=2;
	  	while(true){
		    if(num==1){
			    mainSum+=1;
			    break;
			}
		    while(num%i!=0){
		      	i+=1; 
		    }
			mainSum+=num;
	    	num=num/i; 
	  	}
	ans+=mainSum; 	
	}
cout<<ans;
	return 0;
}