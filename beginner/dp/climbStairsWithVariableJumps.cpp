#include <bits/stdc++.h>
using namespace std;


// Climb Stairs With Variable Jumps using just recursion


// cstep matlab currentStep
int countPath(int cstep, int n, int arr[]){
    if(cstep == n){
        return 1;
    }

    int ways = 0;
    for(int i =1; i<= arr[cstep] && cstep + i<=n ; i++){
        ways = ways + countPath(cstep + i,n,arr) ; 
    }


    return ways;
}



int cs(int arr[], int n){

    return  countPath(0,n,arr);
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