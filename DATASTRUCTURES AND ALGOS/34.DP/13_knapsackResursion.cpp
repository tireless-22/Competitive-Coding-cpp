#include<bits/stdc++.h>
using namespace std;


int knapsack(int weights[],int values[],int totalKnapsackWeight,int n){

	if(totalKnapsackWeight==0 or n==0){
		cout<<"n   "<<n<<"  "<<"totalKnapsackWeight    "<<totalKnapsackWeight<<endl;
		cout<<"presentWeight    "<<weights[n-1]<<"   "<<"presentvalues   "<<values[n-1]<<endl;
		return 0;
	}

	else if(totalKnapsackWeight<weights[n-1]){
		cout<<"n   "<<n<<"  "<<"totalKnapsackWeight    "<<totalKnapsackWeight<<endl;
		cout<<"presentWeight    "<<weights[n-1]<<"   "<<"presentvalues   "<<values[n-1]<<endl;
	
		return knapsack(weights,values,totalKnapsackWeight,n-1);
	}

	else{	// by including the present thing

		cout<<"n   "<<n<<"  "<<"totalKnapsackWeight    "<<totalKnapsackWeight<<endl;
		cout<<"presentWeight    "<<weights[n-1]<<"   "<<"presentvalues   "<<values[n-1]<<endl;


		int profit1=knapsack(weights,values,totalKnapsackWeight-weights[n-1],n-1)+values[n-1];

		// by excluding the present thing
		cout<<"n   "<<n<<"  "<<"totalKnapsackWeight    "<<totalKnapsackWeight<<endl;
		cout<<"presentWeight    "<<weights[n-1]<<"   "<<"presentvalues   "<<values[n-1]<<endl;


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

	int weights[]={1,2,3};
	int values[]={2,5,5};
	int totalKnapsackWeight=4;
	int n=3;
	cout<<knapsack(weights,values,totalKnapsackWeight,n);
	

	return 0;
}