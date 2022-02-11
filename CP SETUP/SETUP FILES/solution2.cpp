#include<bits/stdc++.h>

using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


int soln(int valX,int valY){
    vector<vector<int>> ansArray (valX+2,vector<int>(valY+2,0));

    
    for(int i=0;i<=valX;i++){
        for(int j=0;j<=valY;j++){
            if(i==0 and j==0){
                
                ansArray[i][j]=1;
            }
            else if(i==0){
                
                ansArray[i][j]=ansArray[i][j-1];
            }
            else if(j==0){
               
                ansArray[i][j]=ansArray[i-1][j];
            }
            else{
                ansArray[i][j]=(ansArray[i][j-1]+ansArray[i-1][j])%MOD;
                
                // ansArray[i][j]=(ansArray[i][j-1]%MOD+ansArray[i-1][j]%MOD)%MOD;
            }


        }
    }


    return ansArray[valX][valY];
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    int t;
    cin>>t;
    int x1,y1,x2,y2;
    while(t--){
        
        cin>>x1>>y1>>x2>>y2;
        int val1=abs(x2-x1);
        int val2=abs(y2-y1);
        // cout<<val1<<" "<<val2<<endl;
        cout<<soln(val1,val2)<<endl;
    }
 
    return 0;

}