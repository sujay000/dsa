#include <bits/stdc++.h>
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
	
	//coin change problem #15 from yt 
	int fun(vector<int> v, int sum){
		int n = v.size();
		int t[n+1][sum+1];

		
		
		for(int i =0; i<n+1; i++){
			t[i][0] =1;
		}
		for(int j=0; j<sum+1; j++){
			t[0][j] = 0;
		}
		
		for(int i=1; i<n+1; i++){
			for(int j =1; j<sum+1; j++){
				
				if(v[i-1] <= j){
					t[i][j] = t[i-1][j] + t[i][j-v[i-1]];
				}
				else{
					t[i][j] = t[i-1][j];
				}
				
			}
		}
		
		for(int i=0; i<n+1; i++){
			for(int j=0; j<= sum; j++){
				cout<<t[i][j];
			}
			cout<<endl;
		}
		
		return t[n][sum];
	}

void solve()
{	
	int n;
	cin>>n;
	int sum;
	cin>>sum;
	vector<int> v;
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
		
	}
	
	int x  = fun(v,sum );
	cout<<x;


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
