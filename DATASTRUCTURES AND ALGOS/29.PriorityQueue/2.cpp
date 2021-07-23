#include<bits/stdc++.h>

using namespace std;

// applications of priority queue
// dijkstras algo
// prim's algo
// huffman algo
// heap sort



struct person{
	int height=0
	person(int x){
		height=x;
	}

};


struct cmpPersons{

};



int main(){
	int arr[]={334,5,64,324,53,46};

	priority_queue<int ,vector<int>,greater<int>> pq (arr,arr+6);
	// min heap syntax
	// first one is data type
	// second type is  data type container 
	// third type is function we want to apply on the priority queue

	priority_queue< person ,vector<person>,cmpPersons> pp;

	cout<<pq.top()<<endl;
	pq.pop();
	cout<<pq.top()<<endl;








	return 0;
}