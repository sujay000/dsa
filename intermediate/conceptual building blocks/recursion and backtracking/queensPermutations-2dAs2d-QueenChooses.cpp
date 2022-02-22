#include <bits/stdc++.h>
using namespace std;


// Queens Permutations - 2d As 2d - Queen Chooses

//cq -> current queen
//tq -> total no of queens

int mat[100][100];


void fun(int cq, int tq){
	
	int n = tq;
	
    if(cq > tq){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 0){
                    cout<<"-\t";
                }
                else{
                    cout<<"q"<<mat[i][j]<<"\t";
                }
            }
            cout<<endl;
        }  
        cout<<endl;
        
        return;
    }



    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j] == 0){
            	
                mat[i][j] = cq;
                fun(cq+1, tq);
                mat[i][j] = 0;
            }
        }
    }
}

void solve()
{	
	int n;
    cin>>n;
    int tq = n;

    memset(mat,0,sizeof(mat));

    fun(1, tq);

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}

