#include<bits/stdc++.h>
using namespace std;


// Triplets in GP
// you are given an array and you need to count
// number of triplets with indices(i,j,k) such 
// that the elements at those indices are in 
// geometric progression for a given common ratio
// r and i (i<j<k).
  


int main(){
	vector<int> v={1,16,4,16,64,16};
	int commonRatio=4;

	unordered_map<int,int> leftCounter;
	unordered_map<int,int> rightCounter;
	for( int x:v){
		rightCounter[x]++;
	}

	rightCounter[v[0]]--;
	int totalCount=0;
	
	for (int i=1;i<v.size();i++){
		rightCounter[v[i]]--;
		leftCounter[v[i-1]]++;
		int leftElemCounter=leftCounter[v[i]/commonRatio]?leftCounter[v[i]/commonRatio]:0;
		int rightElemCount=rightCounter[v[i]*commonRatio]?rightCounter[v[i]*commonRatio]:0;
	

		totalCount+=rightElemCount*leftElemCounter;		
	}

	cout<<totalCount;


	return 0;
}




