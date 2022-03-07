#include <bits/stdc++.h>
using namespace std;

// nCr efficient O(n)

int funNCR(int n , int r){
	
	if(r > n){
		return 0;
	}
	if(r == 0){
		return 1;
	}
	if( r == n ){
		return 1;
	}
	
	if( n - r < r){
		r = n-r;
	}
	
	return ((long) (n*funNCR(n-1,r-1)) / r  ) ;
	
}

void solve()
{	
	int n;
	cin>>n;
	int r;
	cin>>r;
	int x = funNCR(n,r);
	cout<<x;
    
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
