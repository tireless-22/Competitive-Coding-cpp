#include<bits/stdc++.h>

using namespace std;

// the best way to solve the choice type of thing is to solve with the recursion
// for thinking in the recursion way we have to first think about the base case just observe the smallest input possile



// if the recursion has 2 child calls then covert the recursion into the dynamic programming
// for conversion of recursion into just think about the variable input's in this case the changing inputs are 
// n amd m


// for converting the recursion into dp


int fn(string s1, string s2,int m, int n ){

	if(n==0 or m==0){
		return 0;
	}
	else if(s1[m-1]==s2[n-1]){
		return 1+fn(s1,s2,m-1,n-1);
	}
	else{

		return max(fn(s1,s2,m,n-1),fn(s1,s2,m-1,n));
	}

 

}

int main(){
	string s1;
	string s2;

	cin>>s1;
	cin>>s2;

	cout<<fn(s1,s2,s1.size(),s2.size());





	return 0;
}