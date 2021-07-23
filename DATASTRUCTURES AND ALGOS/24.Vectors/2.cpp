#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	v.push_back(2);
	// just like append
	v.push_back(5);

for(int i=0;i<v.size();i++){
	v[i]=4;
}

// we can do the same with 2d arrays
	for(int x:v){
		x+=3;
		cout<<x;
	}

	for (int i=0;i<v.size();i++){
			cout<<v[i]<<endl;
}


// by using the reference of the element we can change the elements that will relfect to the main vector
	for(int &x:v){
		x+=3;
		cout<<x;
	}

	for (int i=0;i<v.size();i++){
			cout<<v[i]<<endl;

}

// creating vectors with size

vector<int> vSize(88);



	// we can filll the vector withe sample code
int N=3;
	vector <int > vv(N,6);
	for (int x:vv)
		cout<<x<<endl;


// 2d arrays
	vector<vector<int >> vvv(N,vector<int>(N,3));
	for (int i=0;i<N;i++){
		for (int x:vvv[i])
			cout<<x<<" ";
		cout<<endl;
	}


	return 0;
}