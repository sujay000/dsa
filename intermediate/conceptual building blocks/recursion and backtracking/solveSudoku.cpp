#include <bits/stdc++.h>
using namespace std;

#define N 9 


// Solve Sudoku

bool ispossible(vector<vector<int>> &sudoku, int r, int c, int num){

   for(int i =0; i<9; i++){
   		if(sudoku[i][c] == num){
   			return false;
   		}
   }
   
   for(int j=0; j<9; j++){
   		if(sudoku[r][j] == num){
			return false;   		
   		}
   }
   
   int nr = r - r%3;
   int nc = c - c%3;
   
   for(int i=0; i<3; i++){
   	for(int j=0; j<3; j++){
   		if(sudoku[i+nr][j + nc] == num){
   			return false;
   		}
   	}
   }
   
   
   
   return true; 

}


bool fun(vector<vector<int>> &sudoku){
	int i =0;
	int j =0;
	
	for(i =0; i<9; i++){
		for(j =0; j<9; j++){
			if(sudoku[i][j] == 0 && i<9 && j<9){
				break;
			}
		}
		if(sudoku[i][j] == 0 && i<9 && j<9){
				break;
			}
	}
	
	
	if( i == 9){
		return true;
	}
	
	for(int num = 1; num<= 9; num++){
		if(ispossible(sudoku, i, j, num)){
			sudoku[i][j] = num;
			if(fun(sudoku)){
				return true;
			}
			sudoku[i][j] = 0;
		}
	}
	
	
	
	return false;
}


void solve()
{	

    vector<vector<int>> sudoku(9, vector<int> (9,0));


	for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>sudoku[i][j];
        }
    }


    //calling the function
    
    if(fun(sudoku) == true){

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                cout<<sudoku[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
    	cout<<"solution does not exist";
    }
    
    
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
