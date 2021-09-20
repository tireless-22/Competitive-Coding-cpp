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
			vector<ll> v1;
	vector<ll> v2;
		ll sum1=0,sum2=0;
		ll n;
		cin>>n;
		for (ll i =0;i<n;i++){
			ll temp;
			cin>>temp;
			
			v1.push_back(temp);
		}
		sort(v1.begin(),v1.end());
		for (ll i =0;i<n-1;i++){
			ll temp;
			cin>>temp;
			
			v2.push_back(temp);
		}
		sort(v2.begin(),v2.end());
		int fa=INT_MAX;
		for (int x:v1){
			cout<<x<<" ";
		}
		cout<<endl;
		for (int x:v2){
			cout<<x<<" ";
		}
		cout<<endl;



		if (n==2){
			if((v2[0]-v1[0])>(v2[0]-v1[1]) and (v2[0]-v1[1])>0 ){
				fa=v2[0]-v1[1];

			}
			else{
				fa=v2[0]-v1[0];

			}
			

		}

		else{
			unordered_map<int,int> uoCounter;

			for(int i=0;i<n-2;i++){
				if(v2[i]-v1[i]==v2[i+1]-v1[i+1]){
					uoCounter[v2[i]-v1[i]]++;

					fa=v2[i]-v1[i];

					
				}
				else{
					if(uoCounter[fa]<2){
						fa=v2[n-2]-v1[n-1];
						// cout<<fa<<endl;
						break;

					}


					
				}
			}


		}
		cout<<fa<<endl;
		
		
	}
 

}