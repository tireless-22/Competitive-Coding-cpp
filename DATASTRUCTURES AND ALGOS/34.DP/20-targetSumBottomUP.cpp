#include<bits/stdc++.h>
using namespace std;


int main(){
	vector<int> v={4,2,7,1,3};
	int size=v.size();
	int target=10;
	
	vector<vector<int>> dp(size+1,vector<int>(target+1,0));
	cout<<"hello"<<endl;

	for(int i=0;i<=size;i++){
		for(int j=0;j<=target;j++){
			if(i==0 and j==0){
				dp[i][j]=1;
			}
			else if(i==0){
				dp[i][j]=0;
			}
			else if(j==0){
				dp[i][j]=1;
			}

			else if(v[i-1]<=j){
				// 2 case
				// 1 st case we have to include the present element and we have to check 
				// wheather the j-weight of the previous row  element is also true
				// 2nd  case not including the present element we will take value of the 
				// before row
				// we will see which is true

				if(dp[i-1][j]==1){
					dp[i][j]=1;
				}
				else if(dp[i-1][j-v[i-1]]==1){
					dp[i][j]=1;

				}
				else{
					dp[i][j]=0;
				}

			}
			else{
				// the element we are trying to include is greater than 
				// the total weight so we have to take the value of dp[i-1][j]

				dp[i][j]=dp[i-1][j];

			}

			

		}
	}

	for(auto p:dp){
		for(int x:p){
			cout<<x<<" ";


		}
		cout<<endl;
	}





	return 0;
}