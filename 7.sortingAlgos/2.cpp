#include<bits/stdc++.h>
using namespace std;


struct Point{
	int x;
	int y;

};

bool myCmp(Point a,Point b){
	return  a.x<b.x;
}


int main(){



	Point arr[]={{2,3},{343,53},{23,33},{43,23}};

	for (Point k:arr){

		cout<<k.x<<"\n";
	}



	// cout<<arr[1].x;
	sort(arr,arr+4,myCmp);
	

	for (Point k:arr){

		cout<<k.x<<"\n";
	}


	return 0;
}