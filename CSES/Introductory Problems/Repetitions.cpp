#include <bits/stdc++.h>
//sujay sapkal
using namespace std;
#define mod 1000000007
#define ll long long int
#define loop(k,n) for(int i=k;i<n;i++)
#define rloop(k,n) for(int i=n-1;i>=k;i--)
#define deb(x) cout<<#x<<"="<<x<<endl;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define all(x) (x.begin(),x.end())
typedef pair<int,int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}
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

void bfs();

// Repetitions

void solve()
{	
	string s;
	cin>>s;
	int count = 1;
	int mxcount = 1;
	for(int i=1; i<s.size() ; i++){
		if(s[i] == s[i-1]){
			count++;
			mxcount = max(mxcount , count);
		}
		else{
			count = 1;
		}
	}
	cout<<mxcount;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
