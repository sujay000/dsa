#include <bits/stdc++.h>
#include <vector>

using namespace std;

//zeroOneKnapsack

void zeroOneKnapsack(int n,vector<int> val, vector<int> weight,int cap){
 
int dp[n+1][cap+1];
memset(dp,0,sizeof(dp)); 
// initialisation is taken care by memset in this q luckily

for(int i=1; i<= n; i++){
  for(int j=1; j<= cap; j++){
    if(weight[i-1] <= j){
      dp[i][j] = max(val[i-1] + dp[i-1][j-weight[i-1]] , dp[i-1][j]);
    }
    else{
      dp[i][j] = dp[i-1][j];
    }
  }
}
 
  cout<< dp[n][cap];
  
}

int main() {
    
  int n;
  cin >> n;
  
  vector<int> val(n);
  for (int i = 0; i < n; i++) {
    cin >> val[i];
  }
  
  vector<int> weight(n);
  for (int i = 0; i < n; i++) {
    cin >> weight[i];
  }
  
  int cap;
  cin >> cap;
  
  zeroOneKnapsack(n,val,weight,cap);


}