#include <bits/stdc++.h>
using namespace std;

// All Palindromic Partitions


bool ispalindrome(string s){
  int l = 0;
  int r = s.size() - 1;
  while(l<r){
    if(s[l] != s[r]){
      return false;
    }
    l++;
    r--;

  }


  return true;
}



void solution(string str, string asf)
{
    if(str.size() == 0){
      cout<<asf<<endl;
    }

    for(int i=1; i<= str.size() ; i++){
      string prefix = str.substr(0, i);
      string ros = str.substr(i);
      if(ispalindrome(prefix)){
        solution(ros, asf+"("+ prefix + ") ");


      }
    }
}


int main() 
{
  string str;    
  cin>>str;
  solution(str,"");
  return 0;
}