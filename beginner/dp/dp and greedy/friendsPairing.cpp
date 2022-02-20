#include <bits/stdc++.h>
using namespace std;

// Friends Pairing

int fun(int n){
  vector<int> dp(n+1);
  
  //initialization
  dp[1] = 1;
  dp[2] = 2;
  for(int i=3; i<=n; i++){
    dp[i] = dp[i-1] + ( (i-1)*dp[i-2] ) ;
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
