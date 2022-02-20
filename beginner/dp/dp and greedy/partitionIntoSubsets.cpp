#include <bits/stdc++.h>
using namespace std;

// Partition Into Subsets


long long fun(int n, int k){

   if(n == 0 || k == 0 || n < k){
      return 0;
   }

   long long dp[k+1][n+1];
   memset(dp,0,sizeof(dp));

   //initialization
   for(int j=1; j<=n; j++ ){
      dp[1][j] = 1;
   }


   //solving
   for(int i=2; i<=k; i++){
      for(int j=1; j<=n; j++){
         if(j < i){
            dp[i][j] = 0;
         }
         else if(i == j){
            dp[i][j] = 1;
         }
         else
         {
            dp[i][j] = (dp[i][j-1] * i) + dp[i-1][j-1] ;
         }
      }
   }



   return dp[k][n];
}

void solve()
{	
   int n,k;
   cin>>n>>k;
   long long res = fun(n,k);
   cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
