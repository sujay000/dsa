#include <bits/stdc++.h>
using namespace std;

// Crossword Puzzle

//cwph -> can word placed horizontally
//pwh -> place word horizontally
//rwh -> remove word from horizontal

//cwpv -> can word placed vertically
//pwv -> place word vertically
//rwv -> remove word from vertical

void print(vector<vector<char>> &grid){
    for(int i =0; i<10; i++){
        for(int j =0; j<10; j++){
            cout<<grid[i][j];
        }
        cout<<endl;

    }
    cout<<endl;
}


bool cwph(vector<vector<char>> &grid, string word, int i, int j){
    if( j-1 >= 0 && grid[i][j-1] != '+' ){
        return false;
    }
    else if( j+word.size() < grid[0].size() && grid[i][j+word.size()] != '+'  ){
        return false;
    }

	
    for(int jj = 0; jj<word.size(); jj++){
        if(j+jj >= grid[0].size()){
            return false;
        }

        if(grid[i][j+jj] == '-' || grid[i][j+jj] == word[jj]){
            continue;
        }
        else{
            return false;
        }

    }


    return true;

}

bool cwpv(vector<vector<char>> &grid, string word, int i, int j){
	

	
    if( i-1 >= 0 && grid[i - 1][j] != '+' ){
        return false;
    }
    else if( i+word.size() < grid.size() && grid[i+word.size()][j] != '+'  ){
        return false;
    }
    
   

    for(int ii = 0; ii<word.size(); ii++){
        if(i+ii >= grid.size()){
            return false;
        }

        if(grid[i+ii][j] == '-' || grid[i+ii][j] == word[ii]){
            continue;
        }
        else{
            return false;
        }

    }


    return true;

}




vector<bool> pwh(vector<vector<char>> &grid, string word, int i, int j){



    vector<bool> wePlaced(word.size());

    for(int jj=0; jj<word.size(); jj++){
        if(grid[i][j+ jj] == '-' ){
            grid[i][j+jj] = word[jj];
            wePlaced[jj] = true;
        }
    }

    return wePlaced;

}


vector<bool> pwv(vector<vector<char>> &grid, string word, int i, int j){


    vector<bool> wePlaced(word.size());

	
	
    for(int ii=0; ii<word.size(); ii++){
        if(grid[i+ii][j] == '-' ){
            grid[i+ii][j] = word[ii];
            wePlaced[ii] = true;
        }
    }

    return wePlaced;

}

void rwh(vector<vector<char>> &grid, vector<bool> wePlaced, int i, int j){
	
	
	
    for(int jj =0; jj<wePlaced.size(); jj++){
        if(wePlaced[jj] == true){
            grid[i][j + jj] = '-';
        }
    }

}

void rwv(vector<vector<char>> &grid, vector<bool> wePlaced, int i, int j){

	
    for(int ii =0; ii<wePlaced.size(); ii++){
        if(wePlaced[ii] == true){
            grid[i + ii][j ] = '-';
        }
    }

}



void fun(vector<vector<char>> &grid, vector<string> words, int idx ){

    if(idx == words.size()){
        print(grid);
        return;
    }

    string word = words[idx];

    for(int i = 0; i<grid.size(); i++){
        for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j] == '-' || grid[i][j] == word[0] ){
                if(cwph(grid, word, i, j)){

                    vector<bool> wePlaced = pwh(grid,word,i,j);
                    fun(grid,words,idx+1);
                    rwh(grid,wePlaced,i,j);
                }
            }
            if(grid[i][j] == '-' || grid[i][j] == word[0] ){
                if(cwpv(grid, word, i, j)){

                    vector<bool> wePlaced = pwv(grid,word,i,j);
                    fun(grid,words,idx+1);
                    rwv(grid,wePlaced,i,j);
                }
            }
        }
    }

}







void solve()
{	

    vector<vector<char>> grid(10, vector<char> (10));
    for(int i =0; i<10; i++){
        for(int j =0; j<10; j++){
            cin>>grid[i][j];
        }
    }


    int n;
    cin>>n;

    vector<string> words;

    for(int i=0; i<n; i++){
        string t;
        cin>>t;
        words.push_back(t);
    }

    fun(grid , words, 0);
    

	
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
