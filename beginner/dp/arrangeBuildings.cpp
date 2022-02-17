#include <bits/stdc++.h>
using namespace std;


//Arrange Buildings
//similar to binary strings with no consecutive zeros

void solve()
{	
    int n;
    cin>>n;

    if(n == 0)
        cout<< 0;
    if(n == 1)
        cout<< 1;
    

    int os = 1;
    int ob = 1;

    for(int i = 2; i<=n; i++){
        int ns = os + ob;
        int nb = os;

        os = ns;
        ob = nb;
    }
    int total = os + ob;
    cout<<total*total;

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

