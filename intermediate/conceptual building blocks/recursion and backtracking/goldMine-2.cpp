#include <bits/stdc++.h>
using namespace std;

//need to debug - tle
//gold mine -2

void collectGoldFun(vector<vector<int>> mine, vector<vector<bool>> visited,
                    vector<int> &bag , int r, int c){
    
    int n = mine.size();
    int m = mine[0].size();

    if( r<0 || c<0 || r>= n || c>= m || mine[r][c] == 0 || visited[r][c] == true ){
        return;
    }

    visited[r][c] = true;
    bag.push_back(mine[r][c]);
    collectGoldFun(mine, visited, bag, r+1, c);
    collectGoldFun(mine, visited, bag, r-1, c);
    collectGoldFun(mine, visited, bag, r, c+1);
    collectGoldFun(mine, visited, bag, r, c-1);


}


int fun(vector<vector<int>> mine, vector<vector<bool>> visited ){
    int n = mine.size();
    int m = mine[0].size();

    int mxgold = INT_MIN;


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            if(mine[i][j] != 0 && visited[i][j] == false){
                vector<int> bag;
                collectGoldFun(mine, visited, bag, i , j);

                int sum = 0;
                for(int x : bag){
                    sum += x;
                }

                mxgold = max(mxgold, sum);
            }

        }
    }

    
    return mxgold;
}

void solve()
{	
	int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>> mine(n, vector<int> (m));
    vector<vector<bool>> visited(n, vector<bool>(m));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mine[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<mine[i][j]<<" ";
        }
        cout<<endl;
    }

    int res = fun(mine, visited);
    cout<<res;
    
    

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
