#include <bits/stdc++.h>
using namespace std;

// N Queens - Branch And Bound

void fun(vector<vector<int>> mat, int r , vector<bool> col, 
         vector<bool> ndiag, vector<bool> rdiag , string asf){
    int n = mat.size(); //cols = rows coz square matrix

    if(r == n){
        cout<<asf<<".";
        cout<<endl;

        return;
    }


    for(int i = 0; i<n; i++){
        if(col[i] == false && ndiag[r+i] == false && rdiag[r-i+n-1] == false){

            col[i] = true;
            ndiag[r+i] = true;
            rdiag[r-i+n-1] = true;

            fun(mat, r+1, col, ndiag, rdiag, asf+ to_string(r) + "-" + to_string(i)+", " ); 
 
            col[i] = false;
            ndiag[r+i] = false;
            rdiag[r-i+n-1] = false;
        }
    }
}


void solve()
{	
	int n;
    cin>>n;
    vector<bool> col(n, false);
    vector<bool> ndiag(2*n - 1, false);
    vector<bool> rdiag(2*n - 1, false);
    vector<vector<int>> mat(n, vector<int> (n));
    fun(mat, 0, col , ndiag, rdiag , "");

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
