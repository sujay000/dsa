#include <bits/stdc++.h>
using namespace std;

// Maximum Sum Non Adjacent Elements 

int fun(vector<int> arr, int n){

    int inc = arr[0];
    int exc = 0;
    for(int i=1; i<n; i++){
        int ninc = exc + arr[i];
        int nexc = max(inc, exc);


        inc = ninc;
        exc = nexc;
    }

    return max(inc,exc);
}



void solve()
{	
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i =0; i<n; i++){
        int t;
        cin>>t;
        arr[i] = t;
    }

    int res = fun(arr, n);

    cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
