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

	string A;
	getline(cin,A);
	
	int len=A.size();
	int count=0,sum=0;
	vector<int> v;
	
	for(int i=0;i<len;i++){
		if(A[i]=='x'){
			count++;
			cout<<i/2<<" ";
			v.push_back(i/2);
			sum+=i/2;
		}
	}
	cout<<endl;


	int midIndex=ceil(double(sum)/count);
	cout<<midIndex<<endl;
	if(count%2==0){
		int start=midIndex-count/2;
		int end=midIndex+count/2-1;	
		cout<<start<<" "<<end<<endl;
	}
	else{
		int start=midIndex-count/2;
	    int end=midIndex+count/2;
		cout<<start<<" "<<end<<endl;
	}
	
	

	for (int i=0;i<v.size();i++){
		if(v[i]<midIndex){

		}


	}
   
    
    



// ip

// . . . . x . . x x . . . x . .



// op
//  . . . . . . x x x x . . . . .







return 0;


}
// There is a row of seats. Assume that it contains N seats adjacent to each other. There is a group of people who are already seated in that row randomly. i.e. some are sitting together & some are scattered.

// An occupied seat is marked with a character 'x' and an unoccupied seat is marked with a dot ('.')

// Now your target is to make the whole group sit together i.e. next to each other, without having any vacant seat between them in such a way that the total number of hops or jumps to move them should be minimum.

// Return minimum value % MOD where MOD = 10000003

// Example

// Here is the row having 15 seats represented by the String (0, 1, 2, 3, ......... , 14) -

//               . . . . x . . x x . . . x . .

// Now to make them sit together one of approaches is -
//                   . . . . . . x x x x . . . . .

// Following are the steps to achieve this -
// 1 - Move the person sitting at 4th index to 6th index -  
//     Number of jumps by him =   (6 - 4) = 2

// 2 - Bring the person sitting at 12th index to 9th index - 
//     Number of jumps by him = (12 - 9) = 3

// So now the total number of jumps made = 
//     ( 2 + 3 ) % MOD = 
//     5 which is the minimum possible jumps to make them seat together.

// There are also other ways to make them sit together but the number of jumps will exceed 5 and that will not be minimum.

// For example bring them all towards the starting of the row i.e. start placing them from index 0. 
// In that case the total number of jumps will be 
//     ( 4 + 6 + 6 + 9 )%MOD 
//     = 25 which is very costly and not an optimized way to do this movement