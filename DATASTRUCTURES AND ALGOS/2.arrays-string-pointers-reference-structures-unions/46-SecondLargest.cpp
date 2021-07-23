#include<bits/stdc++.h>
using namespace std;
int main (){
// second largest

	
	int secLar=-1;
	int firstLar=0;
	vector<int> v{2432,5234,52,3356,6335,5,41111,5};
	for (int i=0;i<v.size();i++){
		if (v[i] > v[firstLar]){
			secLar=firstLar;
			firstLar=i;
		}
		else if (v[firstLar]!=v[i]){
			if (secLar==-1 or v[i]>v[secLar]){
				secLar=i;
			}
		}
	}
	cout<<secLar<<endl;
	cout<<firstLar<<endl;
	
	return 0;
}