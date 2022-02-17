#include <bits/stdc++.h>
#include <vector>

using namespace std;

// Unbounded Knapsack 
// notice here even if you exchange the loops order the answer is same
// i.e the combinations or permutations are same
// coz here we see the total value that is collected not the no of ways
// so for ex {2 3 2} or {2 2 3} both give value as same

int unboundedKnapsack(int n,vector<int> val, vector<int> weight,int cap){
    
  int dp[cap+1];

  memset(dp,0,sizeof(dp));


  for(int i=1; i<=n; i++){
    for(int j = 1; j<=cap; j++){
      if(weight[i-1] <= j){
        dp[j] = max(dp[j] , val[i-1] + dp[j-weight[i-1]]);
      }
      
    }
  } 


  return dp[cap];   
}


int main() {

  int n;
  cin>>n;
  vector<int> val(n);
  for (int i = 0; i < n; i++) {

    cin>>val[i];
  }
  vector<int> weight(n);
  for (int i = 0; i < n; i++) {
    cin>>weight[i];
  }
  int cap;
  cin>>cap;
  
  int res = unboundedKnapsack(n,val, weight,cap);
  cout<<res;  


}