#include <bits/stdc++.h>
using namespace std;

// Number of subsequences of the form a^i b^j c^k
// Count A+b+c+ Subsequences

int fun(string &s){
    int n = s.size();

    int a = 0;
    int ab = 0;
    int abc = 0;

    for(int i=0; i<n; i++){
        int ch = s[i];
        if(ch == 'a'){
            a = 2 * a + 1;
        }
        else if( ch == 'b'){
            ab = 2 * ab + a;
        }
        else{
            abc = 2 * abc + ab ;
        }
    }


    return abc;
}

void solve()
{	
    string s;
    cin>>s;
    int res = fun(s);
    cout<<res;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
