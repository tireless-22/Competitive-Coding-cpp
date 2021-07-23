#include <bits/stdc++.h>
using namespace std;
int main(){
	int n=0,num=0,i=0;
	int sum=0;
	num=345345346;
	if (num<=0){
			cout<<0<<endl;	
		}
	else if(num==1){
		cout<<1<<endl;
	}
	else{
		if (num==2 or num==3){
			cout<<num+1;
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
			cout<<sum<<endl;
		}
	}
	return 0;
}