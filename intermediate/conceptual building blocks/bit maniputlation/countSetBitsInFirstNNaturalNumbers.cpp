#include<bits/stdc++.h>
using namespace std;

// Count Set Bits In First N Natural Numbers

long long solution(int n){
  if(n == 0){
    return 0;
  }
  long long noOfDigits = log2(n);
  long long noOfvals = (1 << noOfDigits) ;

  return ( ((noOfDigits*noOfvals) / 2 ) + (n - noOfvals + 1) + solution(n - noOfvals )) ;
}
int main(){
  int n;
  cin>>n;
  cout<<solution(n);
  return 0;
}