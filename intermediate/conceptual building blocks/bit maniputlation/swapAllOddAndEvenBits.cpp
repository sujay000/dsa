#include<bits/stdc++.h>
using namespace std;

// Swap All Odd And Even Bits

int main()
{
    int n;
    cin>>n;
    int oddplacebits = ( n & 0x55555555) ;
    int evenplacebits = (n & 0xaaaaaaaa) ;
    evenplacebits = (evenplacebits >> 1) ;
    oddplacebits = (oddplacebits << 1) ;
    cout<< (oddplacebits | evenplacebits );
    return 0;
}