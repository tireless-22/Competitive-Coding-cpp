#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long n=0,num=0,i=0;
	unsigned long long sum=0,finalSum=0;
	cin>>n;
	for (int k=0;k<n;k++){
		cin>>num;
		if (num<=0){
				sum=0;	
				cout<<0;
			}
		else if(num==1){
				sum=0;
				cout<<sum;
		}
		else{
			if (num==2 or num==3){
				sum=num+1;
			}
			else{
				while(num%2==0){
					sum+=num;
					num=num/2;
				}
				while(num%3==0){
					sum+=num;
					num=num/3;
				}
				int i=5;
				while(i*i<=num){
					while(num%i==0){
						sum+=num;
						num=num/i;
					}
					while(num%(i+2)==0){
						sum+=num;
						num+=num/i;
					}
					i+=6;
				}
				if(num!=1){
					sum+=num+1;
				}
				else{
					sum+=num;
				}	
			}

		}


	
	}
	
	return 0;
}