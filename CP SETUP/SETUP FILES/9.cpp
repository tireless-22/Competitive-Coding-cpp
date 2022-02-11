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

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        unordered_map<int,int> uoCounter;
        priority_queue<int> p1;


        priority_queue<int,vector<int> ,greater<int>>p2;


        bool check=true;
        int larger=INT_MIN;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
           
        }
        int max=*max_element (v.begin(), v.end());
        for(int temp:v){
            uoCounter[temp]++;
            if(uoCounter[temp]==1){
                // decreasing
                p1.push(temp);
            }
            else if (uoCounter[temp]==2 and temp!=max){
                // increasing
                p2.push(temp);

            }
            else{
                check=false;
                break;
            }

        }

        if(!check){
            cout<<-1;
        }
        else{

            while(!p2.empty()){
                cout<<p2.top()<<" ";
                p2.pop();
            }
            while(!p1.empty()){
                cout<<p1.top()<<" ";
                p1.pop();
            }
        
        }

        cout<<"\n";

    }

}


