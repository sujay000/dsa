#include<bits/stdc++.h>
using namespace std;

// All Repeating Except One

int main() {
  int n;
  cin >> n;
  
  vector<int> v(n);
  
  for(int i =0; i<n; i++){
    cin>>v[i];
  }

  int res = 0;
  for(int x : v){
    res = res ^ x;
  }

  cout<<res;
 
}