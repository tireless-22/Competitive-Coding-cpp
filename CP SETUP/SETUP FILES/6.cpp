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
#define FL(i,x,y) for(int i=x;i<y;i++)

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