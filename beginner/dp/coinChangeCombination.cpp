#include <bits/stdc++.h>
using namespace std;

int coinchangecombination(vector<int> &coins, int amt, vector<int> &dp)
{
   int n = coins.size();
   dp[0] = 1;
   for (auto x : coins)
   {
      for (int i = 1; i <= amt; i++)
      {
         if (x <= i)
         {
            dp[i] = dp[i] + dp[i - x];
         }
      }
   }

   return dp[amt];
}

int main()
{
   int n;
   cin >> n;
   vector<int> coins(n, 0);
   for (int i = 0; i < coins.size(); i++)
   {
      cin >> coins[i];
   }
   int amt;
   cin >> amt;
   vector<int> dp(amt + 1, 0);
   int res = coinchangecombination(coins, amt, dp);
   cout << res;
   cout << endl;
   for (auto x : dp)
   {
      cout << x << " ";
   }
}