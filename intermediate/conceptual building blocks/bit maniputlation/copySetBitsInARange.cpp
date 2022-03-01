#include<bits/stdc++.h>
using namespace std;

// Copy Set Bits In A Range

#define ll long long int

void fun(int a, int b, int l, int  r){

  ll m1 = 1 << (r - l + 1);

    m1 = m1 - 1;

    m1 = m1<<(l-1)  ;

  
  ll m2 = m1 & a;

  cout<<( m2 | b);

}


int main(){
  int a, b, left, right;
  cin>>a>>b>>left>>right;
  
  fun(a , b, left , right);
}