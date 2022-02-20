#include<bits/stdc++.h>
using namespace std;

// Buy And Sell Stocks - One Transaction Allowed

int Transaction(vector < int > arr) {
    int n = arr.size();
    
    int mncost = arr[0];
    int profit = 0;

    for(int i=1; i<n; i++){
      if(arr[i] < mncost ){
          mncost = arr[i];
        }

        profit = max(profit, arr[i] - mncost );
        
    }


    return profit;
}

int main() {
  int n;
  cin >> n;

  vector < int > arr(n, 0);

  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }

  int res = Transaction(arr);
  cout << res;
  return 0;
}