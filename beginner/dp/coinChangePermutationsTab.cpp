#include <iostream>
#include <vector>
using namespace std;

//Coin Change Permutations using tabulation

int CCP(vector<int> coins, int amt, vector<int> dp) {

  dp[0] = 1;
  for(int i =1; i<=amt; i++){
    for(auto x: coins){
        if(x <= i){
          dp[i] = dp[i] + dp[i-x];
        }
    }
  }


  return dp[amt];
  

}

int main() {
  int n;
  cin >> n;
  vector<int> coins(n, 0);
  for (int i = 0; i < coins.size(); i++) {
    cin >> coins[i];
  }
  int amt;
  cin >> amt;
  vector<int> dp(amt + 1, 0);
  int res = CCP(coins, amt, dp);
  cout<<res;

}