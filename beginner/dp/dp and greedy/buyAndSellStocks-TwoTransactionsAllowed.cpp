#include<bits/stdc++.h>
using namespace std;

// Buy And Sell Stocks - Two Transactions Allowed

void transactions(vector < int > arr) {
    int n = arr.size();

    int mnval = arr[0];
    vector < int > dpleft(n);

    for (int i = 1; i < n; i++) {
        mnval = min(mnval, arr[i]);

        dpleft[i] = max(dpleft[i - 1], arr[i] - mnval);
    }



    vector < int > dpright(n);
    int mxval = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        mxval = max(mxval, arr[i]);

        dpright[i] = max(dpright[i + 1], mxval - arr[i]);
    }



    int sumprofit = 0;

    for (int i = 0; i < n; i++) {
        sumprofit = max(sumprofit, dpleft[i] + dpright[i]);
    }



    cout << sumprofit;
}

int main() {
    int n;
    cin >> n;
    vector < int > arr(n, 0);
    for (int i = 0; i < arr.size(); i++) {
        cin >> arr[i];
    }

    transactions(arr);

    return 0;
}