#include<bits/stdc++.h>
using namespace std;

int ninjaTraining(int n, vector<vector<int>> &points)
{
    vector<vector<int>>v (2,vector<int> (4,0));
    
   	for(int i=0;i<=n;i++){
        for(int j=0;j<=3;j++){
            if(i==0 or j==0){
                v[i%2][j%2]=0;
            }
            else if(j==1){
                v[i%2][j]=points[i-1][j-1]+max(v[(i-1)%2][2],v [(i-1)%2][3]);
                
            }
             else if(j==2){
                v[i%2][j%2]=points[i-1][j-1]+max(v[(i-1)%2][1],v[(i-1)%2][3]);
                
            }
             else if(j==3){
                v[i%2][j%2]=points[i-1][j-1]+max(v[(i-1)%2][1],v[(i-1)%2][2]);
                
            }
            
        }
    }
    
    int ans=max(v[n%2][1],max(v[n%2][2],v[n%2][3]));
    
    return ans;
    // Write your code here.
}

int main(){
	int t;
	cin>>t;


	while(t--){
		int n;
		cin>>n;
		vector<vector<int>> v(n,vector<int>(4,0));



		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++){
				int temp;
				cin>>temp;
				v[i][j]=temp;
			}
		}



		cout<<ninjaTraining( n,v)<<endl;


	}


	return 0;
}