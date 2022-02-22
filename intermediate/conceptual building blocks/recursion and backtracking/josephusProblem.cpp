#include <bits/stdc++.h>
using namespace std;

// Josephus Problem


int fun(int n, int k){

    if( n == 1){
        return 0;
    }

    return (k + fun(n-1, k)) % n;

}

void solve()
{	
	int n,k;
    cin>>n>>k;
    int res = fun(n,k);
    cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
