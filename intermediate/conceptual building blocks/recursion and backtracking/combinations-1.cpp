#include <bits/stdc++.h>
using namespace std;

// Combinations - 1

//nos -> no of selected
//asf -> ans so far

void fun(int nos,int r,string asf, int n){

    if(asf.size() == n){
        if(nos == r){
            cout<<asf<<endl;
        }
        return;
    }


    fun(nos+1, r, asf+"i", n);
    fun(nos, r, asf+"-", n);

}


void solve()
{	
    int n, r;
    cin>>n>>r;
    fun(0, r, "", n);

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
