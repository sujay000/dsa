#include <bits/stdc++.h>
using namespace std;

// Buy And Sell Stocks With Cooldown - Infinite Transaction Allowed

  int transaction(vector<int> arr){
    int n = arr.size();

    int bsp = -arr[0]; //bought state profit
    int ssp = 0;       // sold state profit
    int csp = 0;       // cooldown state profit

    for(int i=1; i<n; i++ ){
      int nbsp = max(bsp , csp-arr[i]);
      int nssp = max(ssp , bsp + arr[i]);
      int ncsp = max(csp , ssp);

      bsp = nbsp;
      ssp = nssp;
      csp = ncsp;

    }


    return ssp;
  }
  
    int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    for (int i = 0; i < arr.size(); i++) {
       cin>> arr[i] ;
    }

    int res = transaction(arr);
    cout<<res;
    return 0;
  }
