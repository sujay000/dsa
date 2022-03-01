#include <bits/stdc++.h>
using namespace std;


// Largest Number Possible After At Most K Swaps

int mx = INT_MIN;

//sa -> swaps allowed

void fun(string &s , int sa){

    
    
    int t = stoi(s);
    mx = max(mx , t);
    
    if(sa == 0){
        
        return;
    }
    int n = s.size();

    for(int i = 0; i<= n-2; i++ ){
        for(int j =0; j<=n-1; j++){
            if(s[j] > s[i]){
                swap(s[i] , s[j]);
                fun(s , sa - 1);
                swap(s[i] , s[j]);
            }
        }
    }
}



void solve()
{	
    string s;
    cin>>s;
    int sa;
    cin>>sa;

    fun(s, sa);

    cout<<mx;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
