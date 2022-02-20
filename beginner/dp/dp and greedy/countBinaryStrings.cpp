#include <bits/stdc++.h>
using namespace std;


//Count Binary Strings 


void solve()
{	
    int n;
    cin>>n;

    if(n == 0)
        cout<< 0;
    if(n == 1)
        cout<< 1;

    int ones = 1;
    int zeros = 1;
    for(int i=2; i<=n; i++){
        int nOnes = ones+zeros;
        int nZeros = ones;

        ones = nOnes;
        zeros = nZeros;

    }

    cout<<ones+zeros;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

