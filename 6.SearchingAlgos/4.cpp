#include<bits/stdc++.h>
using namespace std;


vector<int> mergingFun(vector <int >a1, vector <int >a2){
	vector<int >a;
	int lena1=a1.size();
	int lena2=a2.size();
	int i=0;
	int j=0;
	while(i<lena1 and j<lena2){
		if (a1[i]<=a2[j]){
			a.push_back(a1[i]);
			i++;
		}
		else{
			a.push_back(a2[j]);
			j++;
		}
	}

	if (i<lena1){
		for (int k=i;k<lena1;k++){
			a.push_back(a1[k]);	
		}
	}
	else{
		for (int k=j;k<lena2;k++){
			a.push_back(a2[k]);	
		}
	}
	return a;
}



vector<int> recurse(vector<int>a){

	if (a.size()==1){
		return a;
	}	
	vector<int>a1;
	vector<int>a2;

	for (int i =0; i<a.size()/2; i++){
		a1[i]=a[i];
	}
	int j=0;
	for (int i =a.size()/+1;i<a.size()-1;i++){
		a2[j]=a[i];
		j++;
	}
	a1=recurse(a1);
	a2=recurse(a2);
	a= mergingFun(a1,a2);
	return a;


}



int main (){
	vector<int>a={5,4,3,4,3,543,63,6,3,67,34,6};
	vector<int >b;
	b=recurse(a);
	// cout<<a.size();
	for (int x:b){
		cout<<x<<endl;
	}
	cout<<"hello";
	return 0;
}
