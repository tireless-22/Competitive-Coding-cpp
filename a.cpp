#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<vector<char>> v(n,vector<char>(n));
	for(int i=0;i<n;i++){
		string temp;
		cin>>temp;
		for(int j=0;j<n;j++){
			v[i][j]=temp[j];
		}
	}
	int checkCounter=0;
	vector<int> checker ;
	for(int i=0;i<n;i++){
		int temp=0;
		for(int j=0;j<n;j++){
			if(v[i][j]=='R'){
				if(i-j<0){
					if(temp==0){
						temp=(i-j);
					}
					else if(temp>(i-j)){
						temp=(i-j);
					}
				}
				else{
					if(temp==0){
						temp=(i-j);
					}
					else if(temp>(i-j)){
						temp=(i-j);
					}
				}
			}
		}
		checkCounter+=temp;
		checker.push_back(temp);
	}
	if(checkCounter<0){
		cout<<-1<<endl;
	}
	else{
		int ans=0;
		int lastPossitive=n-1;
		bool checko=true;
		while(checko){
			checko=false;
			
			for(int i=n-1;i>=0;i--){
				if(checker[i]>0){
					lastPossitive=i;
				}
				if(checker[i]<0){
					checko=true;
					int temp=checker[lastPossitive];

					checker[lastPossitive]=checker[i]+1;
					checker[i]=temp-1;
					ans++;
				}
			}

		}
		cout<<ans<<endl;
	}
	return 0;
}