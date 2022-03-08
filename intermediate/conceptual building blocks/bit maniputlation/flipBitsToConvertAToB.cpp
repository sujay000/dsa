#include<bits/stdc++.h>
using namespace std;

// Flip Bits To Convert A To B

int main(){

    int a,b;
    cin>>a>>b;

    int valxor = (a ^ b);
    cout<<__builtin_popcount(valxor);

}