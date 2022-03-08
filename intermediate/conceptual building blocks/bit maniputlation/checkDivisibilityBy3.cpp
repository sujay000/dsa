#include<bits/stdc++.h>
using namespace std;

// Check Divisibility By 3


// https://www.youtube.com/watch?v=Sd2ZjG20iUA pepcoding
// we can say that if the string is divisible by 11 then
// the binary form string is divisible by binary form of 11 (i.e 3)

int main(){
    string s;
    cin>>s;

    int oddcount = 0;
    int evencount = 0;

    for(int i = 0; i<s.size() ; i++){
    
        if( i % 2 == 0 ){
            evencount += (s[i] - '0');
        }
        else{
            oddcount += (s[i] - '0');
        }
    }

    if( ((oddcount - evencount)% 11 )== 0){
        cout<<"true";
    }else{
        cout<<"false";
    }
    
}