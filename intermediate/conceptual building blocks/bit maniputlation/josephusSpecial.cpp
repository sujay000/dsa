#include<bits/stdc++.h>
using namespace std;
#define ll long long int


  // Josephus Special

  // int fun(int n, int k){

  //   if(n == 1) return 0;

  //   return (k + fun(n-1,k)) % n; 
  // }

  ll highestPowerOf2(ll n){
    ll res = 1;
    while(res*2 <= n){
      res = res*2;
    
    }

    // //or
    // ll hp = log2(n);
    // ll res = pow(2,hp);

    return res;
  }


  int solution(ll n){
    ll hp2 = highestPowerOf2(n);
    ll l = n - hp2;
    return (2*l + 1);

  }

  
  int main()
  {
    ll n;
    cin>>n;

    // using simple josephus problem but does not work coz of many recursive calls
    // segmentation fault
    // int k = 2; 
    // cout<<fun(n,k)+1;

    cout<<solution(n);
  }