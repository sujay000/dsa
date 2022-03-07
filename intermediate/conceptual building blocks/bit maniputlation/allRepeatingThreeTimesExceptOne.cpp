#include <bits/stdc++.h>
using namespace std;

// All Repeating Three Times Except One

int solution(vector<int> &arr)
{
    int res = 0;

    for (int i = 0; i < 32; i++)
    {
        int t = (1LL << i);
        int count = 0;
        for (int x : arr)
        {

            if (!((x & t) == 0))
            {
                count++;
            }
        }

        if ((count % 3) == 1)
        {
            res = (res | t);
        }
    }

    return res;
}

// for -ve nos take (tn = -1) currently (tn = INT_MAX)
// tnp1 -> 3n + 1
// cwtnp1 -> common with (3n + 1) and the current ele
int solution2(vector<int> &arr)
{
    int tn = ((1LL << 32) - 1);
    int tnp1 = 0;
    int tnp2 = 0;

    for (int x : arr)
    {
        int cwtn = (tn & x);
        int cwtnp1 = (tnp1 & x);
        int cwtnp2 = (tnp2 & x);

        tn = (tn & ~(cwtn));
        tnp1 = (tnp1 | cwtn);

        tnp1 = (tnp1 & ~(cwtnp1));
        tnp2 = (tnp2 | cwtnp1);

        tnp2 = (tnp2 & ~(cwtnp2));
        tn = (tn | cwtnp2);
    }

    return tnp1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << solution2(arr);
}