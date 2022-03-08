#include<bits/stdc++.h>
using namespace std;

// Minimum Flips Required To Make A Or B Equal To C

int minFlips(int a, int b, int c) {

    int r = (a | b) ;

    int xorval = (r ^ c) ;

    int count1 = __builtin_popcount((r &( r ^ c)) & a) + __builtin_popcount((r &( r ^ c)) & b) ;
    int count2 = __builtin_popcount(c & ( r ^ c));

    return (count1 + count2);
 
}

int main()
{
    int a,b,c=0;
    cin>>a>>b>>c;
    cout<<minFlips(a,b,c);
}