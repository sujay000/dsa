#include<bits/stdc++.h>
  using namespace std;

// Print Binary And Reverse Bits

string givebin(int n){
  string s;
  if(n == 0){
    return "0";
  }
  while(n > 0){
    if( (n & 1) == 1){
        s += "1";
    }
    else{
      s += "0";
    }
    n = (n>>1);
    
  }
  	reverse(s.begin() , s.end());
    return s;
}

void printrev(long long n){
	string binOfN = givebin(n);
	reverse(binOfN.begin() , binOfN.end());
  long long res = 0;
  for(int i = 0; i<binOfN.size(); i++){
      res = (res<<1);
      int t = binOfN[i] - '0' ;
      res = res | ((t)&1) ;
  }

  cout<<res<<endl;
}


  int main(){
    int n;
    cin>>n;
    string s = givebin(n);
    cout<<s<<endl;
    printrev(n);
}