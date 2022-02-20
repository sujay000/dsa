#include <bits/stdc++.h>

using namespace std;
// Goldmine

int collectGold(int n, int m, vector<vector<int>> &arr, vector<vector<int>> &dp)
{

  // see the the nested loop carefully
  // first we allow the rows to fill then the columns
  // if we want we can do the initialization separately and then just find normally
  for (int j = m - 1; j >= 0; j--)
  {
    for (int i = n - 1; i >= 0; i--)
    {
      if (j == m - 1)
        dp[i][j] = arr[i][j];
      else if (i == 0)
        dp[i][j] = arr[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);
      else if (i == n - 1)
        dp[i][j] = arr[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1]);

      else
      {
        dp[i][j] = arr[i][j] + max(dp[i - 1][j + 1], max(dp[i][j + 1], dp[i + 1][j + 1]));
      }
    }
  }

  int res = 0;
  for (int i = 0; i < n; i++)
  {
    res = max(res, dp[i][0]);
  }

  return res;
}

int main()
{
  int n, m;
  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arr[i][j];
    }
  }

  vector<vector<int>> dp(n, vector<int>(m, 0));

  cout << collectGold(n, m, arr, dp);
}