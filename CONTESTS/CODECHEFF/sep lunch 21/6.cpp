

#include <bits/stdc++.h>
using namespace std;
#define limit 100003
 
int vecto[limit];
vector<int>adj[limit];
 
void sieve()
{
    vecto[1] = 1;
  
    for (int i=2; i<limit; i++)
        vecto[i] = i;
 
 
    for (int i=2; i*i<limit; i++)
    {
    
        if (vecto[i] == i)
        {
           
            for (int j=i*i; j<limit; j+=i)

                if (vecto[j]==j)
                    vecto[j] = i;
        }
    }
}
 

void fnc(int n)
{
    int index,x,i;
    for(int i=1;i<=n;i++)
    {
        index=1;
        x=i;
        if(x!=1)
            adj[i].push_back(vecto[x]);
        x=x/vecto[x];
     
        while (x != 1)
        {
            if (adj[i][index-1]!=vecto[x])
            {
                adj[i].push_back(vecto[x]);
                index+=1;
            }
            x = x / vecto[x];
        }
    }
}
 

int main()
{

    sieve();
     
    int n = 10000;
 
     
    fnc(n);
    vector<int> vv;
     

     
    for (int i=1; i<=n; i++)
    {
    	vv.push_back(adj[i].size());
      
    }

    

    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	bool check=true;
    	for(int i=0;i<limit-n;i++){
    		if(vv[i]==vv[i+n]){
    			cout<<i+1<<" "<<i+n+1;
    			break;
    		}
    	}
    	cout<<endl;

    }


 




     
    return 0;
    
}