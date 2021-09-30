#include<bits/stdc++.h>
using namespace std;


int knapsack(int weights[],int values[],int totalKnapsackWeight,int n){

	if(totalKnapsackWeight==0 or n==0){
		return 0;
	}

	if(totalKnapsackWeight-weights[n-1]<0){
		return knapsack(weights,values,totalKnapsackWeight,n-1);
	}

	else{	// by including the present thing

		int profit1=knapsack(weights,values,totalKnapsackWeight-weights[n-1],n-1)+values[n-1];

		// by excluding the present thing

		int profit2=knapsack(weights,values,totalKnapsackWeight,n-1);

		if(profit1<profit2){
			return profit2;
		}
		else{
			return profit1;
		}

		// return(max(knapsack(weights,values,totalKnapsackWeight-weights[n-1],n-1)+values[n-1],knapsack(weights,values,totalKnapsackWeight,n-1)));

	}
}



int main(){

	int weights[]={1,3,3,5};
	int values[]={3,4,5,7};
	int totalKnapsackWeight=7;
	int n=4;
	cout<<knapsack(weights,values,totalKnapsackWeight,n);


	return 0;
}