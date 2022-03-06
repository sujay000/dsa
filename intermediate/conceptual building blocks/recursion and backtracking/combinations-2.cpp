#include <bits/stdc++.h>
using namespace std;

// Combinations - 2

void fun(int n , int r, int idx , int ssf, vector<int> &arr, int llidx){

   
        if(ssf == r){
            for(auto x : arr){
                if(x == 0){
                    cout<<"-";
                }else{
                    cout<<"i";
                }
            }
            cout<<endl;
            return;
        }
        
    

    for(int i = llidx + 1; i<n; i++){
        if(arr[i] == 0){
            arr[i] = 1;
            fun(n , r , idx + 1, ssf + 1, arr, i);
            arr[i] = 0;
        }
    }

}

void solve()
{	
    int n;
    cin>>n;
    int r;
    cin>>r;
    vector<int> arr(n);
    fun(n, r, 0 , 0, arr, -1);
	
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    while(t--)
    {
        solve();
    }
    return 0;
}
