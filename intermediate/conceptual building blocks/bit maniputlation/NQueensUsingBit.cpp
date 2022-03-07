#include<bits/stdc++.h>
using namespace std;

// N Queens Using Bit

void solution(vector<vector<bool>>& board, int row, int cols, int ndiag, int rdiag, string asf) {
    
    if(row == board.size()){
      cout<<asf<<"."<<endl;
      return;
    }


    for(int j = 0; j<board[row].size(); j++){
      if(
        ((cols & (1<<j)) == 0 ) &&
        ((ndiag & (1<< (row+j) )) == 0 ) &&
        ((rdiag & (1<<(row - j + board.size() - 1)) ) ==  0 )
      )
      { 
        board[row][j] = true;
        cols ^= (1<<j) ;
        ndiag ^= (1<<(row + j));
        rdiag ^= (1<<(row - j + board.size()- 1 )) ;
        solution(board, row+1, cols, ndiag, rdiag, asf + to_string(row) + "-"+to_string(j)+", " );
        cols ^= (1<<j) ;
        ndiag ^= (1<<(row + j));
        rdiag ^= (1<<(row - j + board.size()- 1 )) ;
        board[row][j] = false;

      }

      
    }




  }

  int main() {
    int n;
    cin>>n;
    vector<vector<bool>> board(n,vector<bool>(n, false));
    int cols = 0;
    int ndiag = 0;
    int rdiag = 0;
    solution(board, 0, cols, ndiag, rdiag, "");
    return 0;
  }