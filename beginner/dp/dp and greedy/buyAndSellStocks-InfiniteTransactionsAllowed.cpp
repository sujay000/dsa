#include <bits/stdc++.h>
using namespace std;


// Buy And Sell Stocks - Infinite Transactions Allowed


  int transactions(vector<int> arr){
    int n = arr.size();
    int profit = 0;
    
    for(int i = 1; i<n; i++){
      if(arr[i] - arr[i-1] > 0 ){
        profit += arr[i] - arr[i-1];
      }
    }

    return profit;
  }

// or not using cumulative addition of profit
  
 int transactions2(vector<int> arr){
    int n = arr.size();
    int profit = 0;
    
    int bd = 0;
    int sd = 0;

    for(int i=1; i<n; i++){
      if(arr[i] - arr[i-1] >= 0){
        sd++;
      }
      else{
        profit += arr[sd] - arr[bd];
        sd = bd = i;
      }
    }

    profit += arr[sd] - arr[bd];

    return profit;
  } 
  
  int main() {
    int n ;
    cin>>n;
    vector<int> arr(n,0);
    for (int i = 0; i < arr.size(); i++) {
      cin>> arr[i];
    }
    
    int res = transactions2(arr);
    cout<<res;

    return 0;
  }