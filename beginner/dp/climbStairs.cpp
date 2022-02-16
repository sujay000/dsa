#include <bits/stdc++.h>
using namespace std;

int dp[1000];

int cs(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    int cs1 = cs(n - 1);
    int cs2 = cs(n - 2);
    int cs3 = cs(n - 3);

    return dp[n] = cs1 + cs2 + cs3;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    cout << cs(n) << endl;
}