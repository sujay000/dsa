#include <bits/stdc++.h>
using namespace std;

//Paint House

int fun(vector<int> red, vector<int> blue, vector<int> green, int n){
    int r = red[0];
    int b = blue[0];
    int g = green[0];

    for(int i=1; i<n; i++){
        int nr = red[i] + min(g,b);
        int nb = blue[i] + min(r,g);
        int ng = green[i] + min(r,b);

        r = nr;
        b = nb;
        g = ng;

    }

    return min(r, min(b,g)); //minimum of r,b,g
}

void solve()
{	
    int n;
    cin>>n;
    vector<int>red(n);
    vector<int>blue(n);
    vector<int>green(n);

    for(int i=0; i<n; i++){
        int t1,t2,t3;
        cin>>t1>>t2>>t3;
        red[i] = t1;
        blue[i] = t2;
        green[i] = t3;
    }

    int res = fun(red,blue,green,n);
    cout<<res;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
