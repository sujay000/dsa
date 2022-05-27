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

//two sets

//EXPLANATION
//  https://www.reddit.com/r/learnprogramming/comments/n9ql5a/cses_problem_two_sets/

// I would like to explain what I did to solve this briefly. Firstly notice that any four consecutive natural numbers can be split into two sets with equal sums Example: If my starting number is say x, and I consider 4 consecutive numbers then sum(x, x + 3) = sum(x + 1, x +2).

// So if n is divisible by 4 you can group them using the above approach by considering the remainders.

// Suppose n when divided by 4 leaves remainder 3. Even then we should be able to divide into two sets since three numbers (x + 1, x + 2, x + 3) such that x is divisible by 4 contain two additional odd numbers (x + 1, x + 3) (x is even since it is divisible by 4). Another point to notice is that 1+2 = 3 is the only triplet (x, x+1, x+2) such that two elements add up to third. So start with sets A = {1, 2} B = {3}. Since n % 4 = 3, count of remaining numbers is divisible by 4. So now apply the first property that given 4 numbers x, x + 1, x + 2, x + 3, sum of the numbers in the middle is equal to that of those at the extremities.

// Hope you have a good time solving the problemset.

void solve()
{	
	ll n;
	cin >> n;
	
	if( (n*(n+1)/2 ) % 2 != 0 ){
		cout << "NO";
		return;
	}
	cout << "YES" << nline;
	
	vi v1 , v2 ;
	if(n % 4 == 0){
		for(int i = 0; i<=n/4; i++){
			if(4*i + 1 <= n)v1.pb(4*i + 1);
			if(4*i + 4 <= n)v1.pb(4*i + 4);
			if(4*i + 2 <= n)v2.pb(4*i + 2);
			if(4*i + 3 <= n)v2.pb(4*i + 3);
		}
	}
	else{
		v1 = {1, 2};
		v2 = {3};

		for(int i = 1; i<=n/4; i++){
			if(4*i  <= n)v1.pb(4*i);
			if(4*i + 3 <= n)v1.pb(4*i + 3);
			if(4*i + 1 <= n)v2.pb(4*i + 1);
			if(4*i + 2 <= n)v2.pb(4*i + 2);
		}
	}
	
	cout << v1.size() << nline;
	for(auto x : v1){
		cout << x << " ";
	}
	cout<<nline << v2.size() << nline;
	for(auto x : v2){
		cout << x << " "; 
	}
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
