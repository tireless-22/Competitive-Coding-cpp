#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	s="hello this is knk";
	int n=s.length();
    queue<pair<char, int>> q;
    map<char, int> m;
    for(int i=0; i<n; i++){
        m[s[i]]++;
        q.push(make_pair(s[i], i));
    }
	
	
	while(!q.empty()){
		cout<<q.front().first<<" "<<q.front().second<<endl;
		q.pop();

	}
	 

	 // cout<<s;




	return 0;
	
}