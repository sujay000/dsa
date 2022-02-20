#include<bits/stdc++.h>
using namespace std;

// Buy And Sell Stocks - K Transactions Allowed

    void transactions(vector<int> arr,int k){
       int n = arr.size();

       vector<vector<int>> dp( k+1 , vector<int> (n, 0));
       
       // 2d dp matrix of k+1 * n
       // similar to
       // int dp[k+1][n];
       // memset(dp,0,sizeof(dp));


       for(int i=1; i<=k; i++){
          for(int j=1; j<n; j++){
             dp[i][j] = dp[i][j-1];
             for(int k=0; k<j; k++){
                dp[i][j] = max(dp[i][j] , dp[i-1][k]+ arr[j]-arr[k]);
             }
          }
       }


       cout<<dp[k][n-1];
    }
    
    int main(){
    
    int n;
    cin>>n;
    vector<int> arr(n,0);

    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    int k ;
    cin>>k;
    
    transactions(arr,k);
    
       return 0;
  }