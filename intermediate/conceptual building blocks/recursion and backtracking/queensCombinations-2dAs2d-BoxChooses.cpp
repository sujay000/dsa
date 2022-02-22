#include <bits/stdc++.h>
using namespace std;


void fun(int qssf, int tq, string asf, int r, int c){

// Queens Combinations - 2d As 2d - Box Chooses

    if(r == tq){
        if(qssf == tq){
        	cout<<asf<<endl;
        	
        }
        return;
    }


    string yasf, nasf;
    int nr , nc ;

    if(c == tq - 1)  // that is last column
    {
         yasf = asf + "q" + "\n" ;
         nasf = asf + "-" + "\n" ;
         nr = r + 1;
         nc = 0;
    }else{
         yasf = asf + "q" ;
         nasf = asf + "-" ;
         nr = r;
         nc = c+1;
    }

	fun(qssf + 1, tq, yasf, nr , nc );
    fun(qssf, tq, nasf, nr , nc );
    
    

}


void solve()
{	
    int n;
    cin>>n;
    
    fun(0, n, "", 0, 0);

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        solve();
    
    return 0;
}
