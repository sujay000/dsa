#include <bits/stdc++.h>
using namespace std;

// Friends Pairing - 2

int counter = 0;

void fun(int i , int n, vector<bool> &used, string asf){

    if(i > n){
    	counter++;
        cout<<counter<<"."<<asf<<endl;

        return;
    }

    if(used[i] == true){
        fun(i+1, n, used, asf);
    }
    else{
    	
        used[i] = true;
        fun(i+1, n, used, asf+"("+ to_string(i) + ") ");


        for(int j = i+1; j<=n; j++ ){
            if(used[j] == false){
                used[j] = true;
            fun(i+1, n, used, asf+"("+ to_string(i)+","+ to_string(j) + ") ");
                used[j] = false;
            }
        }


        used[i] = false;
    }

}

void solve()
{	
    int n;
    cin>>n;
    vector<bool> used(n);
    
    fun(1, n, used, "");
	
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
