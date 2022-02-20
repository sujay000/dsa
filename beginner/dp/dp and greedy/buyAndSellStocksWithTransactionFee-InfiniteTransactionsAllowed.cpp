#include<bits/stdc++.h>
using namespace std;

// Buy And Sell Stocks With Transaction Fee - Infinite Transactions Allowed

int transactions(vector<int> arr,int fee){
  int n = arr.size();

  int bsp = -arr[0];  // bought state profit
  int ssp = 0;  // sold state profit

  for(int i = 1; i<n; i++){
    int nbsp = max(bsp , ssp - arr[i]);
    int nssp = max(ssp, bsp + arr[i] - fee);

    bsp = nbsp;
    ssp = nssp;
  }

  return ssp;

}
  int main() {
    int n;
    cin>> n;
    vector<int> arr(n,0);
    for (int i = 0; i < arr.size(); i++) {
          cin>> arr[i];
    }
    int fee;
    cin>> fee;

  int res = transactions(arr,fee);
  cout<<res;
   
  return 0;
  }
