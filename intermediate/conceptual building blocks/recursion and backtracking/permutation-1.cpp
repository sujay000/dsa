#include <bits/stdc++.h>
using namespace std;

// Permutation - 1

//cit -> current item

void fun(vector<int> arr, int cit, int r){
    int n = arr.size();

    if(cit > r){
        for(int x: arr){
            cout<<x;
        }
        cout<<endl;
        return;
    }

    for(int i=0; i<n; i++ ){
        if(arr[i] == 0){
            arr[i] = cit;
            fun(arr,cit+1,r);
            arr[i] = 0;
        }
    }

}

void solve()
{	
	int n,r;
    cin>>n>>r;
    vector<int> arr(n);
    fun(arr, 1, r);


}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
