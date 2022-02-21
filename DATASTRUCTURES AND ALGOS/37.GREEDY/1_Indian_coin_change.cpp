#include<bits/stdc++.h>
using namespace std;

int greedyCoins(int coins[],int amount,int n){
	// by using the upper_bound -1
	int count=0;

	while(amount!=0){
		int index=upper_bound(coins,coins+n,amount)-1-coins;
		amount=amount-coins[index];
		count++;
		// cout<<"amount"<<amount<<"   "<<"count"<<"  "<<count<<endl;
	}



	return count;
}


int greedyCoinsSolution2(int coins[],int amount,int n){
	// by looping the sorted array in the reverse order
	int count=0;

	for (int i=n-1;i>=0;i--){
		if (amount==0){
			break;
		}
		while(amount>=coins[i]){
			amount=amount-coins[i];
			count++;

		}
	}
	return count;
}

int main(){


	int coins[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(coins)/sizeof(coins[0]);



	int amount;
	cin >>amount;

	cout<<"solution1 "<<greedyCoins(coins,amount,n)<<endl;
	cout<<"solution2 "<<greedyCoinsSolution2(coins,amount,n);


	return 0;
}