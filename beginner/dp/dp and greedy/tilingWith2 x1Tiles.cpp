#include <bits/stdc++.h>
using namespace std;

// Tiling With 2 * 1 Tiles
// it is actually exactly similar to fibonacci

int fun(int n){
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;

    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

void solve()
{	
    int n;
    cin>>n;
    int res = fun(n);
    cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
