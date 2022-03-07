#include <bits/stdc++.h>
using namespace std;
 

int minchanges(vector<vector<int> >& a)
{
    int res = 0; // use to store final result
 
    // Row and column
    int N = a.size(), M = a[0].size();
 
  
    map<int, map<int, int> > mp;
 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
             
  
            int ind = i + j;

            mp[ind][a[i][j]]++;
        }
    }

    // for(int i=0;i<M+N-2;i++){
    //     cout<<i<<"  ";
    //     for(auto x:mp[i]){
    //         cout<<mp[i][x.first]<<"   "<<mp[i][x.second]<<endl;
    //     }
    // }


     

    int r = M + N - 2, l = 0;
    while (l < r) {
         

        int s = 0, mx = 0;

        for (auto x : mp[r]) {
            
            mp[l][x.first] += x.second;
        }

        for (auto x : mp[l]) {

            s += x.second;
            mx = max(x.second, mx);
        }
 

        res += (s - mx);
        l++;
        r--;
    }
   
    // return res
    return res;
}
 
// Driver Code
int main()
{

    vector<vector<int> > mat
        = { { 1, 4, 1 }, { 2, 5, 3 }, { 1, 3, 1 } };
    cout << "Total number of changes requires "<<endl
         << minchanges(mat) << "\n";
 

    vector<vector<int> > mat1
        = { { 1, 4 }, { 2, 5 }, { 1, 3 }, { 2, 5 } };
    cout << "Total number of changes requires "
         << minchanges(mat1) << "\n";
   
    return 0;
}