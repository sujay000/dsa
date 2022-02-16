#include <bits/stdc++.h>
using namespace std;

// Climb Stairs With Variable Jumps using tabulation

int cs(int arr[], int n){

    int dp[n+1];
    memset(dp , 0 , sizeof(dp));
    //in tabulation intialize with 0 using memset

    dp[n] = 1;
    // here i represents currentStep
    // here j represents jump

    for(int i = n-1; i>=0 ; i--){
        for(int j = 1; j<=arr[i] && j+i < n+1; j++){
            dp[i] = dp[i] + dp[i+j] ;
        }
    }

    return dp[0];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}