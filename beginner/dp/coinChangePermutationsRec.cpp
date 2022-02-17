#include <bits/stdc++.h>
#include <vector>
using namespace std;
//Coin Change Permutations using recursion

int CCP(vector<int> coins, int sum, vector<int> dp) {

  if(sum == 0) 
    return 1;
  if(sum < 0)
    return 0;
  
  int noofcoinways = 0;

  for(auto x: coins){
    noofcoinways = noofcoinways + CCP(coins, sum-x, dp);
  }
	cout<<noofcoinways<<" "<<sum<<endl;
  return noofcoinways;

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
  cout<<endl;
  cout<<res;

}