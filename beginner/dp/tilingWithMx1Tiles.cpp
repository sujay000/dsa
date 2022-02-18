#include <bits/stdc++.h>
using namespace std;

//Tiling With Mx1 Tiles
//similar to tiling with 2x1 Tiles

int fun(int m, int n){
    vector<int> dp(n+1);
    dp[0] = 1;
    dp[1] = 1;
    
    for(int i =2; i<= n; i++){
        dp[i] = dp[i-1];
        if(i-m>=0){
            dp[i] += dp[i-m];
        }
    }


    return dp[n];
}


void solve()
{	
    int n,m;
    cin>>n>>m;
    int res = fun(m,n);
    cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
