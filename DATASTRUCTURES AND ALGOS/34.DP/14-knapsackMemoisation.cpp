#include<bits/stdc++.h>
using namespace std;
// created a array to memoize into it
// we will create the size and the dimension fot the array 
// accoring to the varying total 
// no of values that are passed to the function
int t[100][100];

int knapsack(int weights[],int values[],int totalKnapsackWeight,int n,int t[100][100]){

	if(totalKnapsackWeight==0 or n==0){
		return t[totalKnapsackWeight][n]=0;
	}

	// chacker to get the values that are precomputed already

	if(t[totalKnapsackWeight][n]!=-1){
		return t[totalKnapsackWeight][n];

	}

	if(totalKnapsackWeight-weights[n-1]<0){
		return t[totalKnapsackWeight][n]=knapsack(weights,values,totalKnapsackWeight,n-1,t);
				// saving the value of the 2d array
	}

	else{	

		// by including the present thing

		// int profit1=knapsack(weights,values,totalKnapsackWeight-weights[n-1],n-1)+values[n-1];

		// // by excluding the present thing

		// int profit2=knapsack(weights,values,totalKnapsackWeight,n-1);

		// if(profit1<profit2){
		// 	return profit2;
		// }
		// else{
		// 	return profit1;
		// }

		return t[totalKnapsackWeight][n]=(max(knapsack(weights,values,totalKnapsackWeight-weights[n-1],n-1,t)+values[n-1],knapsack(weights,values,totalKnapsackWeight,n-1,t)));
		// saving the value of the 2d array
	}
}



int main(){
	// we intialized every value with -1
	memset(t,-1,sizeof(t));

	int weights[]={1,3,3,5};
	int values[]={3,4,5,7};
	int totalKnapsackWeight=7;
	int n=4;

	cout<<knapsack(weights,values,totalKnapsackWeight,n, t);
	cout<<endl;



	return 0;
}