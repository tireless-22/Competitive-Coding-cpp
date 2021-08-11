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

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
	// left greater element if there is nothing print -1


// INPUTS
// 10
// 7
// 1 -2 -3 0 0 0 4 
// 10
// 0 5 -4 -1 -3 -1 -4 -3 -3 2 
// 7
// -4 1 4 -3 3 -5 5 
// 5
// 2 0 -4 0 5 
// 8
// -2 -2 5 -2 2 0 -3 -2 
// 4
// 1 2 -4 4 
// 5
// 3 -1 -5 2 -4 
// 3
// -4 -4 2 
// 6
// 0 -2 -4 4 0 0 
// 3
// 3 0 -2 



// OUTPUTS
// -2147483648 1 -2 1 1 1 -2147483648 
// -2147483648 -2147483648 5 5 -1 5 -1 -1 -1 5 
// -2147483648 -2147483648 -2147483648 4 4 3 -2147483648 
// -2147483648 2 0 2 -2147483648 
// -2147483648 -2147483648 -2147483648 5 5 2 0 0 
// -2147483648 -2147483648 2 -2147483648 
// -2147483648 3 -1 3 2 
// -2147483648 -2147483648 -2147483648 
// -2147483648 0 -2 -2147483648 4 4 
// -2147483648 3 0 


	int t;
	cin>>t;
	while(t--){
		// input statement

		int n;
		cin>>n;
		vector<int>v;
		for (int i=0;i<n;i++){
			int temp;
			cin>>temp;
			v.push_back(temp);

		}
		stack<int>s ;


		for (int i=0;i<n;i++){
			
			
			while(s.empty()==false and v[i]>=s.top() ){
				s.pop();

			}
			int temp=(s.empty())?INT_MIN:s.top();
			cout<<temp<<" ";


			s.push(v[i]);


		}
		cout<<endl;

	}



	

}