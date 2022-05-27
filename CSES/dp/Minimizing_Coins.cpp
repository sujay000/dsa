#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
//sujay sapkal
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

#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

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
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

void google(int t) {cout << "Case #" << t << ": ";}
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
// #define N 100005
// vector <int> adj_list[N];
// bool visited[N];
// void dfs(int x)
// {
//     if(visited[x])
//         return;
//     visited[x] = true;
//     for(auto i : adj_list[x])
//     {    
//         if(!visited[i])
//             dfs(i);
//     }
// }

typedef array<int,2> edge; // for graphs, make it array<int,3> for weighted edges
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 

void bfs();

// Minimizing Coins

int dp[102][1000006];
void solve()
{	

	memset(dp , 0 , sizeof dp);
	ll n , x;
	cin >> n >> x;
	
	vector<ll> v(n+1);
	for(ll i = 1; i<=n; i++){
		cin >> v[i];
	}
	
	
	// for(ll i = 0; i<=n; i++){
		// for(ll j = 0; j<=x; j++){
			// if(j == 0){
				// dp[i][j] = 0;
			// }
			// else if(i == 0){
				// dp[i][j] = INT_MAX-2;
			// }
			// else{
				// if(j - v[i] >= 0)
				// dp[i][j] = min(1 + dp[i][j-v[i]] , dp[i-1][j] );
				// else
					// dp[i][j] = dp[i-1][j];
			// }
		// }
	// }
// 
// 	
	// if(dp[n][x] >= INT_MAX-2 ){
		// cout << -1;
	// }else{
		// cout << dp[n][x];
	// }
	
	vector<ll> dp(x+1 , INT_MAX); 
	dp[0] = 0;
	for(ll i = 1; i<=x; i++ ){
		for(auto c : v){
			if(i - c >= 0)
			dp[i] = min(dp[i] , 1 + dp[i-c]);
		}
	}
	
	if(dp[x] >= INT_MAX - 2 ){
		cout << -1;
		return;
	}
	cout << dp[x] ;
	
	
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    
    // cin>>t;
    
    while(t--)
    {
        solve();
    }
    return 0;
}
