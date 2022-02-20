#include <bits/stdc++.h>
#include <vector>
using namespace std;

// Climb Stairs With Minimum Moves


int cs(int arr[], int n, vector<int>& dp) {
  //if dp was a array intialize its all elements with 0
  dp[n] = 0; //minimum no of moves from the nth stair to nth stair is 0

  for(int i= n-1; i>=0 ; i--){

    int mnvalue = INT_MAX-100; 
    //some high value but not much high coz then (intmax+ something) may overflow

    for(int j=1; j<= arr[i] && i+j <= n; j++){
        mnvalue = min(mnvalue, 1 + dp[i+j]);
    }
    dp[i] = mnvalue;
  }

  return dp[0];
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0 ; i < n ; i++) {
    cin >> arr[i];
  }

  vector<int> dp(n + 1, 0);

  cout << cs(arr, n, dp) << endl;
}